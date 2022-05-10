#include <bits/stdc++.h>
using namespace std;



void solve() {
	int n; cin >> n;
	unordered_map<int, int> m;

	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		m[a]++;
	}

	for (auto p : m) {
		if (p.second >= 3) {
			cout << p.first << "\n";
			return;
		}
	}
	cout << -1 << '\n';
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}