#include <bits/stdc++.h>
using namespace std;

int intlog(double base, double x) {
	return (int)(log(x) / log(base));
}

int main() {
	int n; cin >> n;

	int ans = 0;
	int upper = intlog(5, n);
	for (int k = 1; k <= upper + 1; k++ ) {
		ans += (n / (pow(5, k)));
	}

	cout << ans;

	return 0;
}