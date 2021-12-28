#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void dfs(int r, int c, vector<vector<int>>& grid, int k, int rightwards, int n) {

	if (r >= n || c >= n || k < 0 || grid[r][c] == 1) return;
	// cout << "current pos = " << r << ":" << c << '\n';
	if (r == n - 1 && c == n - 1) {
		ans++;
	}

	if (rightwards == -1) {
		dfs(r + 1, c, grid, k, 0, n);
		dfs(r, c + 1, grid, k, 1, n);
		return;
	}

	//checking down
	if (rightwards == 1) {
		dfs(r + 1, c, grid, k - 1, 0, n);
	}
	else {
		dfs(r + 1, c, grid, k, 0, n);
	}

	//checking right
	if (rightwards == 1) {
		dfs(r, c + 1, grid, k, 1, n);
	}
	else {
		dfs(r, c + 1, grid, k - 1, 1, n);
	}

}

void solve() {
	int n, k; cin >> n >> k;
	vector<vector<int>> grid(n, vector<int>(n, 0));
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		for (int j = 0; j < n; ++j) {
			char c = s[j];
			if (c != '.') {
				grid[i][j] = 1;
			}
		}
	}

	dfs(0, 0, grid, k, -1, n);

	cout << ans << '\n';

	// for (vector<int> v : grid) {
	// 	for (int x : v) {
	// 		cout << x << " ";
	// 	}
	// 	cout << '\n';
	// }

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		solve();
		ans = 0;
	}

	return 0;
}

/*

1
3 3
...
.H.
...

*/