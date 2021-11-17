#include<bits/stdc++.h>
using namespace std;

int main() {
	string task; cin >> task;
	string s; cin >> s;

	int rows = ceil(s.size() / 4.0);
	vector<vector<char>> grid(rows, vector<char>(4));

	int xAdds = rows * 4 - s.size(); //
	string toAdd = "";
	for (int i = 0 ; i < xAdds; ++i) {
		toAdd += 'X';
	}
	s += toAdd;
	int charIndex = 0;
	if (task == "encode") {
		for (int i = 0; i < rows; ++i) {
			for (int j = 0; j < 4; ++j) {
				grid[i][j] = s[charIndex];
				charIndex++;
			}
		}
		//now to get encoded msg
		string encoded = "";
		for (int j = 0; j < 4; ++j) {
			for (int i = 0 ; i < rows; ++i) {
				encoded += toupper(grid[i][j]);
			}
		}
		cout << encoded;
	}
	else {
		for (int j = 0; j < 4; ++j) {
			for (int i = 0 ; i < rows; ++i) {
				grid[i][j] = s[charIndex];
				charIndex++;
			}
		}
		//now to get decoded msg
		string decoded = "";
		for (int i = 0 ; i < rows; ++i) {
			for (int j = 0; j < 4; ++j) {
				decoded += tolower(grid[i][j]);
			}
		}
		cout << decoded;

	}

	return 0;
}