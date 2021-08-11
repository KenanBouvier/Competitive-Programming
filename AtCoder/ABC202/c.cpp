#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;

	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);

	for (int i = 0 ; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0 ; i < n; ++i) {
		cin >> b[i];
	}
	for (int i = 0 ; i < n; ++i) {
		cin >> c[i];
	}

	unordered_map<int, int> m;
	for (int i = 0 ; i < n; ++i) {
		m[a[i]]++;
	}

	int ans = 0 ;

	for (int i = 0 ; i < n; ++i) {
		if (m.find(b[c[i] - 1]) != m.end()) {
			ans += m[b[c[i] - 1]];
		}
	}

	cout << ans << '\n';

	return 0;
}