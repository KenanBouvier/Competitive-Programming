#include <bits/stdc++.h>
using namespace std;


void drop(int row, int col, vector<string>& grid) {
	grid[row][col] = '.';
	int n = grid.size();
	int i = row + 1;
	while (true) {

		if (i == n || grid[i][col] == 'o' || grid[i][col] == '*') {
			grid[i - 1][col] = '*';
			break;
		}

		i++;
	}
}
void solve() {
	int n, m; cin >> n >> m;
	vector<string> grid;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		grid.push_back(s);
	}

	for (int j = 0; j < m; ++j) { //col
		for (int i = n - 1; i >= 0; --i) {
			if (grid[i][j] == '*') {
				drop(i, j, grid);
			}
		}
	}

	for (string s : grid) {
		cout << s << '\n';
	}
	cout << '\n';
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}