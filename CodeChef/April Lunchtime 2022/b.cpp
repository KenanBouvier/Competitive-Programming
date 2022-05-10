#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, m, l; cin >> n >> m >> l;

	if (n == 0) {
		cout << m << "\n";
		return;
	}

	long long curL = l + n - 1;

	m %= curL;

	if (m >= l) {
		cout << 0 << "\n";
	}
	else {
		cout << m << "\n";
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