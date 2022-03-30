#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, x; cin >> n >> x;
	const long long MOD = 1e9 + 7;
	vector<long long> coins(n);
	vector<long long> count(x + 1 , 0); // num ways to get to that element
	vector<bool> dp(x + 1 , 0); //possible

	for (long long i = 0 ; i < n; ++i) {
		cin >> coins[i];
		if (coins[i] > x) {
			continue;
		}
		dp[coins[i] - 1] = 1;
		count[coins[i] - 1] = 1;
	}


	for (long long i = 1 ; i < x + 1; ++i) {
		for (long long j : coins) {
			if (i - j >= 0 && dp[i - j] == 1) {
				dp[i] = 1;
				count[i] = (count[i] + count[i - j]) % MOD;
			}
		}
	}

	cout << count[x - 1];

}

int main() {
	solve();
	return 0;
}