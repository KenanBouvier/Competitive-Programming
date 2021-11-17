#include <bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	long long ans = (a / gcd(a, b)) * b;
	return ans;
}

void solve() {
	int x, k; cin >> x >> k;
	int multiply = x * k;
	cout << lcm(x, x * 2) << " " << lcm(multiply, (multiply - 1)) << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}