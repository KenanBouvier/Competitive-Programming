#include <bits/stdc++.h>
using namespace std;

void solve() {

	string s; cin >> s;
	char c; cin >> c;
	bool good = false;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == c && i % 2 == 0) {
			good = true;
		}
	}

	if (good) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

}

int main() {
	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}

