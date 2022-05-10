#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	vector<int> d;
	for (int i = 0; i < n - 1; ++i) {
		int diff = v[i + 1] - v[i];
		d.push_back(diff);
	}

	for (int i = 1; i < n - 1; i++) {
		if (d[i - 1] * 2 == d[i] || d[i] * 2 == d[i - 1]) {
			continue;
		}
		else {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}