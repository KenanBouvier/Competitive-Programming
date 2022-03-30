#include <bits/stdc++.h>
using namespace std;


void solve() {
	long long n, x; cin >> n >> x;

	//going left -> *2
	//going right -> *2 -1

	//going up -> /2 floored

	string s; cin >> s;
	string prev;
	while (prev.size() != s.size()) {
		prev = s;
		string s1;
		unordered_set<int> us;
		for (int i = 1; i < s.size(); ) {
			if ( s[i - 1] == 'R' && s[i] == 'U' || s[i - 1] == 'L' && s[i] == 'U') {
				us.insert(i - 1);
				us.insert(i);
				i += 2;
			}
			else {
				i++;
			}
		}

		for (int i = 0; i < s.size(); ++i) {
			if (us.find(i) == us.end()) { //doesn't exist
				s1 += s[i];
			}
		}
		s = s1;
	}
	// cout << s << '\n';

	for (char c : s) {
		if (c == 'L') {
			x *= 2;
		}
		else if (c == 'R') {
			x *= 2;
			x++;
		}
		else { //c=='U'
			x = floor(x / 2);
		}
	}
	cout << x;

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	// int t; cin >> t;
	// while (t--) {
	// 	solve();
	// }
	return 0;
}

/*

LRULURLURLULULRURRLRULRRRUURRU

LRRLRRLLRRUR
*/