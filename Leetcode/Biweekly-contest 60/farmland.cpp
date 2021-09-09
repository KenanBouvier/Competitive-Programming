#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findFarmland(vector<vector<int>> land) {
	vector<set<pair<int, int>>> groups;

	vector<vector<bool>> visited(land.size(), vector<bool>(land[0].size()));
	int m = land.size(); //row size
	int n = land[0].size(); //col size

	for (unsigned int i = 0; i < land.size(); ++i) {
		for (unsigned int j = 0 ; j < land[0].size(); ++j) {
			if (visited[i][j] || land[i][j] == 0) {
				continue;
			}
			//bfs
			queue<pair<int, int>> q;
			q.push({i, j});
			set<pair<int, int>> g;

			while (!q.empty()) {
				pair<int, int> f = q.front();
				int r = f.first;
				int c = f.second;
				q.pop();
				if (visited[r][c] || land[r][c] == 0) {
					continue;
				}
				visited[f.first][f.second] = true;

				// element has val 1
				g.insert({r, c});

				if (r - 1 >= 0) {
					q.push({r - 1, c});
				}
				if (r + 1 < m) {
					q.push({r + 1, c});
				}
				if (c + 1 < n) {
					q.push({r, c + 1});
				}
				if (c - 1 >= 0) {
					q.push({r, c - 1});
				}
			}
			groups.push_back(g);
		}
	}
	vector<vector<int>> ans;

	for (set<pair<int, int>> s : groups) {
		vector<int> v;
		auto firstIt = s.begin();
		auto lastIt = s.end();
		lastIt--;
		pair<int, int> topLeft = {(*firstIt).first, (*firstIt).second};
		pair<int, int> bottomLeft = {(*lastIt).first, (*lastIt).second};
		v.push_back(topLeft.first);
		v.push_back(topLeft.second);
		v.push_back(bottomLeft.first);
		v.push_back(bottomLeft.second);
		ans.push_back(v);
	}
	return ans;

}

int main() {
	vector<vector<int>> ans = findFarmland({{1, 1}, {1, 1}});
	for (auto v : ans) {
		for (auto x : v ) {
			cout << x << " ";
		}
		cout << endl;
	}
}