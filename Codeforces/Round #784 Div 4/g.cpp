#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n, m; cin >> n >> m;
	vector<string> grid;
	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		grid.push_back(s);
	}
	vector<vector<char>> v(m);

	for (int j = 0; j < m; ++j) { //col
		for (int i = n - 1; i >= 0; i--) { //row
			char elem = grid[i][j];
			if (elem == '*') {
				v[j].push_back('*');
			}
			else if (elem == 'o') {
				v[j].push_back('o');
			}
		}
	}

	vector<vector<char>> ans(n, vector<char>(m, '.'));

	for (int j = 0; j < m; ++j) { //col

		vector<char> vec = v[j];
		for (int i = 0; i < vec.size(); ++i) {
			char c = vec[i];
			ans[n - 1 - i][j] = c;
		}
	}

	for (vector<char> vec : ans) {
		for (char c : vec) {
			cout << c;
		}
		cout << "\n";
	}
	cout << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}