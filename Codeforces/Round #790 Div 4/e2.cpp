#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q; cin >> n >> q;

	vector<int> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 1; i < n; ++i) {
		v[i] += v[i - 1];
	}

	while (q--) {
		int Q; cin >> Q;

		auto it = lower_bound(v.begin(), v.end(), Q);
		if (it == v.end()) {
			cout << -1 << '\n';
			continue;
		}

		cout << 1 + it - v.begin() << '\n';
	}
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}