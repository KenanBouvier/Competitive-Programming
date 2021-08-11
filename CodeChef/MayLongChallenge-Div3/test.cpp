#include <bits/stdc++.h>
using namespace std;

long long power(long long x, long long y, long long p)
{
	int res = 1;

	x = x % p;

	if (x == 0) return 0;

	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;

		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

int main() {

	int t; cin >> t;
	long long MOD = 1000000007;

	while (t--) {
		long long n; cin >> n;

		cout << power(2, n - 1, MOD) << '\n';
	}

	return 0;
}