#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m; cin >> n >> m;

	if (m < n) {
		cout << n + (n - m) << "\n";
	}
	else {
		cout << n << "\n";
	}

}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}