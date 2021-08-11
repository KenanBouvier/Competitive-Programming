#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	map<int, bool> m;
	int ans = 0;

	for (int i = 1; i <= n; ++i) {
		if (m.find(i) != m.end()) {
			if (m[i]) {
				ans++;
			}
		}
		else {
			string s = to_string(i);
			if (((int)s[0] - 48 + (int)s[s.size() - 1] - 48) % 2 == 0) {
				ans++;
				m[i] = true;
			}
			else {
				m[i] = false;
			}
		}
	}
	cout << ans << "\n";

	return 0;
}