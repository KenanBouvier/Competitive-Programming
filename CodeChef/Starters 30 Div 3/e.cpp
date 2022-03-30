#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m; cin >> n >> m;
	int x1, y1; cin >> x1 >> y1;
	int x2, y2; cin >> x2 >> y2;
	x1--; x2--; y1--; y2--;

	//max distinct = 3
	// if both points are on (even,even) or both are on (odd,odd) then it is 3. Else it is 2
	// this is because we can alternate 1,2,1,2,1,2... if they are not same. But if they are, then surround one of the points by 3: up down left and right. then fill in using alternating 1,2,1,2,1,2...

	int different = 0;
	int same = 0;

	bool oneCorner;

	if (((x1 % 2 == 0) && (y1 % 2 != 0)) || ((x1 % 2 != 0) && (y1 % 2 == 0))) {// unique
		different++;
		oneCorner = false;
	}
	if (((x2 % 2 == 0) && (y2 % 2 != 0)) || ((x2 % 2 != 0) && (y2 % 2 == 0))) {// unique
		different++;
	}

	if (((x1 % 2 == 0) && (y1 % 2 == 0)) || ((x1 % 2 != 0) && (y1 % 2 != 0))) {
		same++;
		oneCorner = true;
	}
	if (((x2 % 2 == 0) && (y2 % 2 == 0)) || ((x2 % 2 != 0) && (y2 % 2 != 0))) {
		same++;
	}

	vector<vector<int>> grid(n, vector<int>(m));
	grid[x1][y1] = 1;
	grid[x2][y2] = 4;

	if (different == 1 && same == 1) { //they match so you can just have 2 and fill out

		bool one;

		if (oneCorner) {
			one = true;
		}
		else {
			one = false;
		}

		for (int i = 0 ; i < m; ++i) {
			if (i % 2 == 0) { //even column

				for (int j = 0; j < n; ++j) {

					if (one) {
						grid[j][i] = 1;
					}
					else {
						grid[j][i] = 2;
					}

					one = !one;
				}
			}
			else { //odd column

				for (int j = n - 1; j >= 0; --j) {

					if (one) {
						grid[j][i] = 1;
					}
					else {
						grid[j][i] = 2;
					}

					one = !one;
				}
			}
		}

	}
	else { //have to use 3 by circling round one first

		//now add surrounds

		//lets take x2,y2

		if (x2 - 1 >= 0) {//up
			grid[x2 - 1][y2] = 3;
		}
		if (x2 + 1 < n) {//down
			grid[x2 + 1][y2] = 3;
		}
		if (y2 + 1 < m) {//right
			grid[x2][y2 + 1] = 3;
		}
		if (y2 - 1 >= 0) {//left
			grid[x2][y2 - 1] = 3;
		}

		bool one;

		if (oneCorner) {
			one = true;
		}
		else {
			one = false;
		}

		for (int i = 0 ; i < m; ++i) {
			if (i % 2 == 0) { //even column

				for (int j = 0; j < n; ++j) {
					if (grid[j][i] == 3 || grid[j][i] == 4) {
						one = !one;
						continue;
					}

					if (one) {
						grid[j][i] = 1;
					}
					else {
						grid[j][i] = 2;
					}

					one = !one;
				}
			}
			else { //odd column

				for (int j = n - 1; j >= 0; --j) {
					if (grid[j][i] == 3 || grid[j][i] == 4) {
						one = !one;
						continue;
					}

					if (one) {
						grid[j][i] = 1;
					}
					else {
						grid[j][i] = 2;
					}

					one = !one;
				}
			}
		}


	}

	//now switch out 4 for 2
	grid[x2][y2] = 2;

	// print ans

	for (int i = 0 ; i < n; ++i) {
		for (int j = 0 ; j < m; ++j) {
			cout << grid[i][j] << " ";
		}
		cout << '\n';
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// solve();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

