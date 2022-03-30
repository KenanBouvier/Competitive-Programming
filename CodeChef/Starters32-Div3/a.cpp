#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, x, y; cin >> n >> x >> y;
	string s; cin >> s;
	bool zer = 0;
	bool one = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '0') {
			zer = 1;
		}
		if (s[i] == '1') {
			one = true;
		}
	}

	if (!zer || !one) {
		cout << 0 << '\n';
	}
	else {

		cout << min(x, y) << '\n';
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