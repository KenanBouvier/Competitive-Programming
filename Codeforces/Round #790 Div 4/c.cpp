#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	int ans = INT_MAX;

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1 ; j < n; ++j) {
			string s = v[i];
			string t = v[j];

			int local = 0;
			for (int k = 0; k < m; ++k) {
				local += abs(s[k] - t[k]);
			}

			ans = min(ans, local);
		}
	}
	cout << ans << '\n';
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}