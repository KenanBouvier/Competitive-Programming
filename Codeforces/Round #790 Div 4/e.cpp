#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q; cin >> n >> q;

	vector<int> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater<int>());

	while (q--) {
		int Q; cin >> Q;
		bool found = false;
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			if (sum < Q) {
				sum += v[i];
			}
			else {
				cout << i << "\n";
				found = true;
				break;
			}
		}
		if (sum >= Q && !found) {
			cout << n << '\n';
			found = true;
		}
		if (!found) {
			cout << -1 << '\n';
		}
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