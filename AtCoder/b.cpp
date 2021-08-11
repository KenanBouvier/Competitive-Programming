#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s; cin >> s;
	string str = "";
	bool end = true;
	for (int i = s.size() - 1; i >= 0; --i) {
		if (s[i] == '0') {
			if (end) {
				continue;
			}
			else {
				str += s[i];
			}
		}
		else {
			end = false;
			str += s[i];
		}
	}
	reverse(str.begin(), str.end());

	for (int i = 0 ; i < str.size() / 2; ++i) {
		if (str[i] != str[str.size() - 1 - i]) {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0 ;
}