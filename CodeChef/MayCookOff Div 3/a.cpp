#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n; cin >> n;
	if (n == 1) {
		cout << 1 << '\n';
	}
	else if (n <= 3) {
		cout << n - 1 << '\n';
	}
	else {
		cout << n << '\n';
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}