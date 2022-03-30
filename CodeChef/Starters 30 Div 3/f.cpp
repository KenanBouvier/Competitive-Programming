#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0 ; i < n; ++i) {
		cin >> v[i];
	}

	vector<int> groups;

	int count = 1;
	for (int i = 1 ; i < n; ++i) {
		if (v[i] > v[i - 1]) {
			count++;
		}
		else {
			groups.push_back(count);
			count = 1;
		}
	}
	groups.push_back(count);

	int mx = INT_MIN;
	for (int i = 1; i < groups.size() - 1; ++i) {
		int left = groups[i - 1];
		int right = groups[i + 1];
		mx = max(mx, groups[i] + max(left, right) );
	}

	if (groups.size() == 2) {
		mx = groups[0] + groups[1];
	}
	if (groups.size() == 1) {
		mx = groups[0];
	}

	cout << mx << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// solve();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

