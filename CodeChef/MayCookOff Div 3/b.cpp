#include <bits/stdc++.h>
using namespace std;

unsigned nChoosek( unsigned n, unsigned k )
{
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	int result = n;
	for ( int i = 2; i <= k; ++i ) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}

void solve() {
	int n; cin >> n;

	// int mx = 3 * (n - 1);
	int mx = 3 * (n / 2);
	// n--;

	// int games = nChoosek(n, 2);
	// int second = games / n;
	// if (second * n < games) {
	// 	second++;
	// }
	// second *= 3;

	// cout << mx - second << '\n';
	cout << mx << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}