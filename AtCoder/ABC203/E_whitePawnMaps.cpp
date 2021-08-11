#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
set<int> ans;

void dfs(int row, int col, map<pair<int, int>, int >& grid, int n) {
	pair<int, int> pos = {row, col};
	if (grid[pos] == 3) return;
	grid[pos] = 3;
	// cout << "at " << row << " " << col << endl;
	if (row == n - 1) {
		ans.insert(col);
		return;
	}
	if (row + 1 < n) {
		// if (grid.find({row + 1, col}) == grid.end()) {
		if (grid[ {row + 1, col}] == 0) {
			dfs(row + 1, col, grid, n);

		}
	}
	if (row + 1 < n && col - 1 >= 0) {
		if (grid[ {row + 1, col - 1}] == 2) {
			dfs(row + 1, col - 1, grid, n);
		}
	}
	if (row + 1 < n && col + 1 < n) {
		if (grid[ {row + 1, col + 1}] == 2) {
			dfs(row + 1, col + 1, grid, n);
		}
	}
}

void solve() {
	ans.clear();
	int n, m; cin >> n >> m;
	map<pair<int, int>, int> grid;
	int row = 0;
	int col = n;
	for (int i = 0 ; i < m; ++i) {
		long long x, y; cin >> x >> y;
		pair<int, int> p = {x, y};
		grid[p] = 2;
	}
	dfs(row, col, grid, 2 * n + 1);
	cout << ans.size() << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}