#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;

	long double sum = 0;
	for (int i = 0; i < n; ++i) {
		long double a; cin >> a;
		sum += a;
	}

	long double x = -1.0 + sqrt(1.0 + 8.0 * sum);
	x /= 2;

	cout << (int)x << '\n';


}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}