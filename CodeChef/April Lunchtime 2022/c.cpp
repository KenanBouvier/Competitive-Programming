#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
	if (a % b == 0)
		return b;
	else
		gcd(b, a % b);
}

void solve() {
	long long x, c; cin >> x >> c;


	// e.g lcm(4,6) = 12
	// e.g gcd(20,15) = 5

	/*

	lcm(b,X) minimise when one is a multiple of the other lcm()
	choose n as 1 so lcm(1,X) is always X;

	gcd(b,X) maximise when b is equal to X  gcd(X,X) = X

	pos1 = X

	if(n^c = X);
		pos2 = 1

	return min(pos1,pos2)

	*/

	long long ans = x;
	//biggest b that divides X without exceeding

	long long n = 2;
	long long powerVal = pow(n, c);

	while (true) {
		if (powerVal > x) break;
		// cout << powerVal << '\n';
		if (x % powerVal == 0) {
			long long greatestcd = gcd(powerVal, x);
			long long lcm = (x * powerVal) / greatestcd;
			long long val = lcm / greatestcd;
			ans = min(ans, val);
		}

		n++;
		powerVal = pow(n, c);
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