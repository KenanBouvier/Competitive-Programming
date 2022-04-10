#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	int mx = 0;
	int mx2 = 0;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;

		if (a > mx) {
			mx2 = mx;
			mx = a;
		}
		else {
			if (a > mx2) {
				mx2 = a;
			}
		}
	}

	if (mx - mx2 <= 1) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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