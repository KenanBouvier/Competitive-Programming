#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string newS = "";
	getline(cin, s);
	s = ' ' + s; //for index error
	for (char c : s) {
		newS += tolower(c);
	}
	s = newS;
	s += ' '; //for index error
	int ans = 0;
	int lb = 0;

	while (true) {
		size_t found = s.find("and", lb);
		if (found != string::npos) {
			char beforeC = s[found - 1];
			char nextC = s[found + 3];
			if ((int)nextC >= 97 && (int)nextC <= 122) {
				ans--;
			}
			else if ((int)beforeC >= 97 && (int)beforeC <= 122) {
				ans--;
			}
			lb = found + 1;
			ans++;
		}
		else {
			cout << ans;
			return 0;
		}
	}

	return 0;
}