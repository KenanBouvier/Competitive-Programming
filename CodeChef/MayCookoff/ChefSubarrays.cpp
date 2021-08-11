#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> v(n);

		for (int i = 0 ; i < n; ++i) {
			cin >> v[i];
		}
		int ans = 0;

		for (int i = 0; i < k ; ++i) {
			unordered_map<int, int> m;
			int spots = 0;
			int mx = 1;
			for (int j = i; j < n; j += k) {
				// cout << v[j] << endl;
				spots++;
				m[v[j]]++;
				mx = max(mx, m[v[j]]);
			}
			ans += (spots - mx);
		}
		cout << ans << '\n';
	}

	return 0;
}