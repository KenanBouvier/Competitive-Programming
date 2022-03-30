#include <bits/stdc++.h>

using namespace std;

void result(vector<vector<char>> g) {
	// int n = g.size();
	// int m = g[0].size();
	// for (int i = 0 ; i < n; ++i) {
	// 	for (int j = 0 ; j < m; ++j) {
	// 		g[i][j] %= 65;
	// 		g[i][j] += 65;
	// 	}
	// }
	for (auto vec : g) {
		for (char c : vec) {
			cout << c;
		}
		cout << "\n";
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;

	while (t--) {
		int n, m; cin >> n >> m;

		vector<vector<char>> g(n, vector<char>(m, ' '));
		int letter = 65;
		if (n % 3 == 0 && m % 2 == 0 )	{
			cout << "YES\n";

			for (int row = 0; row < n; row += 3) {
				for (int col = 0; col < m; col += 2) {
					letter %= 91;
					if (letter < 65) {
						letter += 65;
					}
					g[row][col] = letter;
					g[row][col + 1] = letter;
					g[row + 1][col] = letter;
					letter++;
					g[row + 1][col + +1] = letter;
					g[row + 2][col] = letter;
					g[row + 2][col + 1] = letter;
					letter++;
				}
			}
			result(g);
		}

		else if (m % 3 == 0 && n % 2 == 0) {
			cout << "YES\n";

			for (int row = 0; row < n; row += 2) {
				for (int col = 0; col < m; col += 3) {
					letter %= 91;
					if (letter < 65) {
						letter += 65;
					}
					g[row][col] = letter;
					g[row][col + 1] = letter;
					g[row + 1][col] = letter;
					letter++;
					g[row][col + 2] = letter;
					g[row + 1][col + 1] = letter;
					g[row + 1][col + 2] = letter;
					letter++;
				}
			}
			result(g);
		}
		else {
			cout << "NO\n";
		}


	}



	return 0;
}