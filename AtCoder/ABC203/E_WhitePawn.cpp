#include <bits/stdc++.h>
using namespace std;
set<int> ans;

void dfs(int row, int col, vector < vector<bool>>& visited, vector<vector<int>>& grid) {
	if (visited[row][col]) return;
	visited[row][col] = true;
	int n = visited.size();

	if (row == n - 1) {
		ans.insert(col);
		return;
	}
	if (row + 1 < n) {
		if (grid[row + 1][col] == 0) {
			dfs(row + 1, col, visited, grid);
		}
	}
	if (row + 1 < n && col - 1 >= 0) {
		if (grid[row + 1][col - 1] == 2) {
			dfs(row + 1, col - 1, visited, grid);
		}
	}
	if (row + 1 < n && col + 1 < n) {
		if (grid[row + 1][col + 1] == 2) {
			dfs(row + 1, col + 1, visited, grid);
		}
	}
}

void solve() {
	ans.clear();
	int n, m; cin >> n >> m;
	vector<vector<int>> grid(2 * n + 1, vector<int>(2 * n + 1, 0));
	int row = 0;
	int col = n;
	for (int i = 0 ; i < m; ++i) {
		long long x, y; cin >> x >> y;
		grid[x][y] = 2;
	}
	vector<vector<bool>> visited(2 * n + 1, vector<bool>(2 * n + 1, false));
	dfs(row, col, visited, grid);
	cout << ans.size() << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<int> test;
	cout << test.max_size() << endl;
	// solve();
	return 0;
}