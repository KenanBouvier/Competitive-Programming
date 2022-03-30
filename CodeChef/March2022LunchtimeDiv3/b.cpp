#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, x; cin >> n >> x;

	int trios = n / 3;

	int left = n - trios * 3;
	int ans = trios * (2 * x);

	ans += left * x;

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