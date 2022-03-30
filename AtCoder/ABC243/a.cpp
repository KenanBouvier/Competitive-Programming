#include <bits/stdc++.h>
using namespace std;


void solve() {
	int v, a, b, c;

	cin >> v >> a >> b >> c;

	while (v >= 0) {
		v -= a;
		if (v < 0) {
			cout << "F";
			return;
		}
		v -= b;
		if (v < 0) {
			cout << "M";
			return;
		}
		v -= c;
		if (v < 0) {
			cout << "T";
			return;
		}
	}
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