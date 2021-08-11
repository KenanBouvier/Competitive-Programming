#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, m; cin >> n >> m;
		string a, b; cin >> a >> b;
		unordered_map<char, int> mp;
		int ans = 0;

		for (char c : b) {
			mp[c]++;
		}

		unordered_map<char, int> current;
		for (int i = 0; i < m; ++i) {
			current[a[i]]++;
		}

		for (int i = 0 ; i <= n - m; ++i) {

			if (current == mp) {
				ans++;
			}

			current[a[i]]--;
			current[a[i + m]]++;

			for (auto it = current.begin(); it != current.end();) {
				if (it->second == 0) {
					it = current.erase(it);
				}
				else {
					it++;
				}
			}
		}
		cout << ans << '\n';
	}

	return 0;
}