#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;

	if (k <= 2) {
		cout << 2 * (n - k) << '\n';
	}
	else {
		cout << 2 * (n - k + (k - 1) / 2) << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}