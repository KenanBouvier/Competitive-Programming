#include <bits/stdc++.h>
using namespace std;


void bfs(queue<int>& q, vector<vector<int>> g, vector<bool>& visited, int& numVisited) {

	int sz = q.size();
	//this is like level order traversal. We only run it the original size as that is one node search away

	for (int p = 0; p < sz; ++p) {

		int n = q.front();
		q.pop();

		for (int neighbour : g[n]) {
			if (visited[neighbour]) continue;
			visited[neighbour] = true;
			numVisited++;
			q.push(neighbour);
		}
	}
}

void solve() {
	int n, m, queries; cin >> n >> m >> queries;

	vector<vector<int>> g(n + 1);
	vector<bool> visited(n + 1);

	//this visited vector will be like our frozen array

	for (int i = 0 ; i < m; ++i) {
		int u, v; cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}

	int numVisited = 0;
	queue<int> q;
	while (queries--) {
		int type, x; cin >> type >> x;

		if (type == 1) {
			if (visited[x]) continue;
			visited[x] = true;
			numVisited++;
			q.push(x);
		}
		else if (type == 2) {
			for (int iter = 0; iter < x; ++iter) {
				if (numVisited >= n) {
					break;
				}
				bfs(q, g, visited, numVisited);
			}
		}

		else {
			if (visited[x]) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
		}

	}
	for (bool b : visited) {
		cout << b << " ";
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}

/*
8 9 9
1 2
2 6
2 5
2 3
3 5
3 4
4 8
5 7
6 7
1 1
2 1
1 8
2 1
3 3
3 4
3 7
2 100
3 7

9 8 2
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
1 1
2 1000


*/