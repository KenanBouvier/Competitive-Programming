#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int ans = 0;

		for (int a = 1; a < n; ++a) {
			for (int b = a + 1; b <= n; ++b) {
				if ((m % a) % b == (m % b) % a) {
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}