#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, x; cin >> n >> x;

	vector<long long> dp(x + 1, -1);
	vector<long long> coins(n);

	for (long long i = 0 ; i < n; ++i) {
		cin >> coins[i];
		if (coins[i] - 1 > x) {
			continue;
		}
		dp[coins[i] - 1] = 1;
	}

	for (long long i = 1; i <= x; ++i) {
		if (dp[i] != -1) {
			continue;
		}
		long long mn = INT_MAX;
		for (long long j : coins) {
			if (i - j >= 0 && dp[i - j] != -1) {
				mn = min(mn, dp[i - j]);
			}
		}
		if (mn == INT_MAX) continue;
		dp[i] = 1 + mn;
	}

	cout << dp[x - 1];
}

int main() {
	solve();
	return 0;
}