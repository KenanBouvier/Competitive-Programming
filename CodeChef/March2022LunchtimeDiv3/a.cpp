#include <bits/stdc++.h>
using namespace std;


void solve() {
	int x; cin >> x;

	if (x % 5 != 0) {
		cout << -1 << '\n';
		return;
	}

	int ans = x / 10;
	x %= 10;
	if (x != 0) {
		ans++;
	}
	cout << ans << "\n";
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}