#include <bits/stdc++.h>
using namespace std;

void solve() {
	int x, y; cin >> x >> y;
	cout << abs(x - y) << '\n';
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}