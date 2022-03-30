#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
	int n; cin >> n;

	string s; cin >> s;
	int qs = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '?') {
			qs++;
		}
	}
	vector<vector<bool>> g(s.size(), vector<bool>(s.size(), false));

	//first diagonal
	for (int i = 0 ; i < n; ++i) {
		g[i][i] = 1;
	}
	//second diagonal
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] == s[i + 1] || s[i + 1] == '?' || s[i] == '?') {
			g[i][i + 1] = 1;
		}
	}
	for (int j = 2; j < n; ++j) {
		for (int i = 0; i < n - j; ++i) {
			if ((s[i] == s[i + j] || s[i + j] == '?' || s[i] == '?') && g[i + 1][i + j - 1] == 1) {
				g[i][i + j] = 1;
			}
		}
	}

	//removing top right diagonals from question marks
	unordered_set<int> uniques;
	for (int row = 0; row < n - 5; ++row) {
		for (int col = 4 + row; col < n; ++col) {
			if (g[row][col] == 1) {
				uniques.insert(row + col);
			}
		}
	}
	// cout << uniques.size() << "\n";
	if (qs >= uniques.size()) {
		cout << "Case #" << caseNum << ": ";

		cout << "POSSIBLE\n";
	}
	else {
		cout << "Case #" << caseNum << ": ";

		cout << "IMPOSSIBLE\n";
	}

	// cout << "\n";
	// for (auto vec : g) {
	// 	for (bool b : vec) {
	// 		cout << b << " ";
	// 	}
	// 	cout << "\n";
	// }
	// cout << '\n';


}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	int caseNum = 1;
	while (t--) {
		solve(caseNum);
		caseNum++;
	}
	return 0;
}