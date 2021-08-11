#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {

		int k; cin >> k;

		int ans = 0;

		for (int i = 1 ; i <= k * 2; ++i) {
			ans += gcd(i * i + k, (i + 1) * (i + 1) + k);
		}
		cout << ans << '\n';

	}

	return 0;
}