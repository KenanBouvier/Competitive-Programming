#include <bits/stdc++.h>
using namespace std;


int getSum(int r, int c, vector<vector<int>>& grid) {
	int n = grid.size();
	int m = grid[0].size();
	int sum = 0;

	// going top left
	int col = c;
	for (int i = r; i >= 0 && col >= 0 ; --i) {
		sum += grid[i][col];
		col--;
	}

	//going top right
	col = c;
	for (int i = r; i >= 0 && col < m ; --i) {
		sum += grid[i][col];
		col++;
	}

	//going bottom right

	col = c;
	for (int i = r; i < n && col < m ; ++i) {
		sum += grid[i][col];
		col++;
	}

	//going bottom left

	col = c;
	for (int i = r; i < n && col >= 0 ; ++i) {
		sum += grid[i][col];
		col--;
	}
	sum -= grid[r][c] * 3;
	return sum;
}

void solve() {
	int n, m; cin >> n >> m;
	vector<vector<int>> grid(n, vector<int>(m, 0));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> grid[i][j];
		}
	}

	int ans = 0;


	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			ans = max(ans, getSum(i, j, grid));
		}
	}

	cout << ans << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}