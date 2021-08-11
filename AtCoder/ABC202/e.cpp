#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int N; cin >> N;

	vector<vector<int>> adjacency(N + 1);

	for (int i = 2; i <= N; ++i) {
		int p; cin >> p;

		adjacency[p].push_back(i);
	}

	unordered_map<int, vector<vector<int>>> m;
	//distance : path

	queue<vector<int>> q;

	q.push({1});

	while (!q.empty()) {
		vector<int> front = q.front();
		int f = front[front.size() - 1];
		q.pop();

		int dist = front.size();
		m[dist].push_back(front);

		for (int adj : adjacency[f]) {
			vector<int> newPath = front;
			newPath.push_back(adj);
			q.push(newPath);
		}

	}

	int Q; cin >> Q;
	map<pair<int, int>, int> memo;

	while (Q--) {
		int u, d;
		cin >> u >> d;
		int ans = 0;

		if (memo.find({u, d}) != memo.end()) {
			cout << memo[ {u, d} ] << '\n';
		}
		else {
			for (vector<int> v : m[d + 1]) {
				for (int x : v) {
					if (x == u) {
						ans++;
						break;
					}
				}
			}
			memo[ {u, d}] = ans;
			cout << ans << '\n';
		}
	}
	return 0;
}