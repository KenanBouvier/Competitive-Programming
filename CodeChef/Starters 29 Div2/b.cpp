#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int sm = 0;
	int lowestAdd = INT_MAX;
	int biggestSubtract = INT_MIN;

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		a = abs(a);
		if (i % 2 == 0) {
			sm += a;
			lowestAdd = min(lowestAdd, a);
		}
		else {
			sm -= a;
			biggestSubtract = max(biggestSubtract, a);
		}
	}

	if (biggestSubtract > lowestAdd) {
		sm += (2 * biggestSubtract);
		sm -= (2 * lowestAdd);
	}

	cout << sm << "\n";
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}