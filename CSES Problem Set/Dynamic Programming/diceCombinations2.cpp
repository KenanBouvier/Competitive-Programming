#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;
	const int MOD = 1000000007;
	vector<int> dp(n + 1, 0);
	dp[0] = 1;

	for (int i = 1 ; i <= n; ++i) {
		for (int dice = 1; dice <= 6; ++dice) {
			if (i - dice >= 0) {
				dp[i]  = (dp[i] + dp[i - dice]) % MOD;
			}
		}
	}

	cout << dp[n];

}

int main() {
	solve();
	return 0;
}