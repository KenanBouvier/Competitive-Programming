#include<bits/stdc++.h>
using namespace std;

long long solve(double n) {
	long long quartic = n * n * n * n;
	long long square = n * n;

	long long result = (quartic - 9 * square + 24 * n - 16);

	return	result / 2;
}

int main() {
	long long n; cin >> n;

	for (long long i = 1; i <= n; ++i) {
		cout << solve(i) << "\n";
	}

	return 0;
}


