#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k; cin >> n >> k;
	vector<int> prices(n);

	for (int i = 0 ; i < n; ++i) {
		cin >> prices[i];
	}

	sort(prices.begin(), prices.end());
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		if (k - prices[i] >= 0) {
			k -= prices[i];
			ans++;
		}
		else {
			int next = prices[i];
			if (next % 2 != 0) { //odd
				next++;
			}
			int discounted = next / 2;

			if (k - discounted >= 0) {
				k -= discounted;
				ans++;
				cout << ans << '\n';
				return;
			}
		}
	}
	cout << ans << '\n';

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

