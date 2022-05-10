#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n, x; cin >> n >> x;
	int mn = INT_MAX;
	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		mn = min(mn, a);
	}
	int res;
	if (x % mn == 0) {
		res = x / mn;
	}
	else {
		res = x / mn;
		res++;
	}

	cout << max(res, n) << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}