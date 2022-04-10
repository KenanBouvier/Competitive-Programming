#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;
	bool one = false;
	if (s[0] == '1') one = true;
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] == '0') continue;
		one = true;
		if (s[i] == s[i - 1] && s[i - 1] == '1') {
			cout << 2 << '\n';
			return;
		}
	}
	if (!one) {
		cout << 0 << "\n";
	}
	else {
		cout << 1 << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}