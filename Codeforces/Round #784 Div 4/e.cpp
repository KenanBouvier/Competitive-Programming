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

	map<char, int> mp;

	for (int i = 0 ; i < n; ++i) {
		string s; cin >> s;
		char first = s[0];
		char second = s[1];

		if (first != second) {
			mp[first]++;
			mp[second]++;
		}
		else {
			mp[first]++;
		}
	}
	long long ans = 0;

	for (auto p : mp) {
		ans += nChoosek(p.second, 2);
	}
	cout << ans << '\n';

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}