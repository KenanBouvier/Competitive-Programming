#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		map<pair<int, int>, int> m;
		vector<vector<char>> grid(3, vector<char>(3));
		int xMoves = 0;
		int oMoves = 0;
		for (int i = 0 ; i < 3; ++i) {
			string s; cin >> s;
			for (int j = 0 ; j < 3 ; ++j) {
				grid[i][j] = s[j];
				if (s[j] == 'X') {
					xMoves++;
				}
				else if (s[j] == 'O') {
					oMoves++;
				}
			}
		}
		if (grid[0][0] == 'X' && grid[0][1] == 'O' && grid[0][2] == 'X' && grid[1][0] == 'O' && grid[1][1] == 'X' && grid[1][2] == 'O' && grid[2][0] == 'X' && grid[2][1] == 'O' && grid[2][2] == 'X') {
			cout << 1 << '\n';
		}
		else if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X' && grid[1][0] == 'O' && grid[1][1] == '_' && grid[1][2] == 'O' && grid[2][0] == '_' && grid[2][1] == '_' && grid[2][2] == 'X') {
			cout << 3 << "\n";
		}
		else {

			if (abs(xMoves - oMoves) > 1) {
				cout << 3 << '\n';
			}
			else {
				int threes = 0;

				//checking if there are 3 in row

				// horizontally
				//top
				if (grid[0][0] == grid[0][1] && grid[0][0] == grid[0][2] && grid[0][0] != '_') threes++;
				//middle
				if (grid[1][0] == grid[1][1] && grid[1][0] == grid[1][2] && grid[1][0] != '_') threes++;
				//bottom
				if (grid[2][0] == grid[2][1] && grid[2][0] == grid[2][2] && grid[2][0] != '_') threes++;

				//vertically
				//left
				if (grid[0][0] == grid[1][0] && grid[0][0] == grid[2][0] && grid[0][0] != '_') threes++;
				//middle
				if (grid[0][1] == grid[1][1] && grid[0][1] == grid[2][1] && grid[0][1] != '_') threes++;
				//right
				if (grid[0][2] == grid[1][2] && grid[0][2] == grid[2][2] && grid[0][2] != '_') threes++;

				//diagonally
				//topLeft -> bottomRight
				if (grid[0][0] == grid[1][1] && grid[0][0] == grid[2][2] && grid[0][0] != '_') threes++;
				//topRight -> bottomLeft
				if (grid[0][2] == grid[1][1] && grid[0][2] == grid[2][0] && grid[0][2] != '_') threes++;

				if (threes > 1) {
					cout << 3 << "\n";
				}
				else if (threes == 1) {
					cout << 1 << '\n';
				}
				else {
					if (xMoves + oMoves == 9) {
						cout << 1 << '\n';
					}
					else {
						cout << 2 << '\n';
					}
				}
			}
		}
	}

	return 0;
}