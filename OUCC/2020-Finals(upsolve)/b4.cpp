#include<bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;

	for (int i = 0 ; i < s.size(); ++i) {
		if (s[i] == '0') {
			s[i] = '1';
		}
		else {
			s[i] = '0';
		}
	}
	bitset<8> b(s);
	b = b.to_ulong() + 1;
	string st = b.to_string();
	string ans = "";
	bool add = false;

	for (char c : st) {
		if (add) {
			ans += c;
		}
		else if (c != '0') {
			ans += c;
			add = true;
		}
	}

	cout << ans;
	return 0;
}