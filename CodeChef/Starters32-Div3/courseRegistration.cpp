#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m, k; cin >> n >> m >> k;

	m -= k;
	if (m >= n) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}