#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, x, k; cin >> n >> x >> k;

	cout << min(n, k / x) << '\n';

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// solve();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

