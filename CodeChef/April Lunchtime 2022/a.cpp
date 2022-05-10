#include <bits/stdc++.h>
using namespace std;

unsigned nChoosek( unsigned n, unsigned k )
{
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	long long result = n;
	for ( long long i = 2; i <= k; ++i ) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}

void solve() {
	long long n; cin >> n;
	double ones = 0;
	double twos = 0;

	for (long long i = 0; i < n; ++i) {
		long long a; cin >> a;
		if (a == 1) {
			ones++;
		}
		if (a == 2) {
			twos++;
		}
	}

	long long ans = n * ones; //for all ones
	long long toSubtract = (ones * (ones + 1));
	toSubtract /= 2;
	ans -= toSubtract;
	ans += nChoosek(twos, 2);

	cout << ans << "\n";

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}