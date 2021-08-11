#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<vector<int>> adjacency(n + 1, vector<int>());
	for (int i =  1; i <= n; ++i) {
		int p; cin >> p;
		if (p == 0)continue;
		adjacency[i].push_back(p);
		adjacency[p].push_back(i);
	}

	int ans = 0;

	for (int start = 1; start <= n; ++start) { // bfs start from each node

		queue<pair<int, int>> q; //{ node , max in path}
		q.push({start, start});
		vector<bool>visited(n + 1, false);
		while (!q.empty()) {
			int f = q.front().first;
			int mx = q.front().second;
			q.pop();
			if (visited[f]) continue;
			visited[f] = true;
			if (f < start) continue;

			if (mx <= f) {
				ans++;
			}
			mx = max(mx, f);
			for (int adj : adjacency[f]) {
				q.push({adj, mx});
			}

		}

	}
	cout << ans - n << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0;
}