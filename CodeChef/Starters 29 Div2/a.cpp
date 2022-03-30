#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int i = 0;
	int ans = 0;
	while (true) {
		if (i >= s.size()) break;

		if (s[i] == s[i + 1]) {
			i += 2;
		}
		else {
			i += 1;
		}

		ans++;
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}