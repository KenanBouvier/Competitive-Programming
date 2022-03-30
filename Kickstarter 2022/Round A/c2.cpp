#include <bits/stdc++.h>
using namespace std;

bool search(string);
bool rec(string s, int i) {
	string pos1 = s;
	string pos2 = s;
	pos1[i] = '0';
	pos2[i] = '1';
	if (search(pos1) || search(pos2)) {
		return true;
	}

	return false;
}

bool search(string s) { //returns true if there is NO >=5 palindrome substring i.e valid
	// cout << "trying string: " << s << "\n";
	vector<vector<bool>> g(s.size(), vector<bool>(s.size(), false));
	int n = s.size();
	//first diagonal

	for (int i = 0 ; i < n; ++i) {
		if (s[i] == '?') {
			g.clear();
			if (rec(s, i)) {
				return true;
			}
			else {
				return false;
			}
		}
		g[i][i] = 1;
	}

	//second diagonal
	for (int i = 0; i < n - 1; ++i) {
		if (s[i] == s[i + 1]) {
			g[i][i + 1] = 1;
		}
	}
	for (int j = 2; j < n; ++j) {
		for (int i = 0; i < n - j; ++i) {
			if ((s[i] == s[i + j]) && g[i + 1][i + j - 1] == 1) {
				if (j + 1 >= 5) {
					return false;
				}
				g[i][i + j] = 1;
			}
		}
	}
	return true;//no >=5 substring palindrome

}

void solve(int caseNum) {
	int n; cin >> n;

	string s; cin >> s;

	if (search(s)) {
		cout << "Case #" << caseNum << ": ";

		cout << "POSSIBLE\n";
	}
	else {
		cout << "Case #" << caseNum << ": ";

		cout << "IMPOSSIBLE\n";
	}

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