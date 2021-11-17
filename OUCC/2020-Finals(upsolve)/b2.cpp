#include<bits/stdc++.h>
using namespace std;

int main() {

	vector<vector<char>> grid(5, vector<char>(6, '|'));
	string s; cin >> s;

	int i = 0;
	for (int j = 0; j < 6; ++j) {
		if (s[i] != '0') {
			int row = (int)s[i] - 48;
			grid[row - 1][j] = 'x';
		}
		i += 2;
	}
	cout << "E A D G B E" << '\n';
	cout << "===========\n";
	for (int i = 0 ; i < grid.size(); ++i) {
		for (int j = 0 ; j < grid[0].size(); ++j) {
			cout << grid[i][j] << " ";
		}
		cout << "\n-----------\n";
	}


	return 0;
}

