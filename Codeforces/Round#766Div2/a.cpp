#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m, r, c; cin >> n >> m >> r >> c;
	r--;
	c--;
	vector<vector<char>> grid(n);
	bool oneBlack = false;
	for (int i = 0 ; i < n; ++i) {
		string s; cin >> s;
		for (char ch : s) {
			grid[i].push_back(ch);
			if (ch == 'B') {
				oneBlack = true;
			}
		}
	}
	if (!oneBlack) {
		cout << -1 << '\n';
		return;
	}
	if (grid[r][c] == 'B') {
		cout << 0 << '\n';
		return;
	}
	//checking col

	for (int row = r; row < n; ++row) {
		if (grid[row][c] == 'B') {
			cout << 1 << '\n';
			return;
		}
	}
	//checking row
	for (int col = c; col < m; ++col) {
		if (grid[r][col] == 'B') {
			cout << 1 << '\n';
			return;
		}
	}
	cout << 2 << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}
	/*

	1
	4 4 2 2
	WWBB
	BWWW
	BBBB
	WWWW
	4 4 1 3
	WWBB
	BWWW
	BBBB
	WWWW
	4 4 2 2
	WWBB
	BWWW
	BBBB
	WWWW
	*/
	return 0;
}