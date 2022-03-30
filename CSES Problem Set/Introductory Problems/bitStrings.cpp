#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	const long long MOD = 10e9 + 7;
	cout << MOD << "\n";

	long long ans = 1;

	for (int i = 0 ; i < n; ++i) {
		ans = (ans * 2) % MOD;
	}

	cout << ans;

	return 0;
}