#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0 ; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0 ; i < n; ++i) {
		cin >> b[i];
	}

	int same = 0;
	int diff = 0;
	map<int, int> m;
	unordered_map<int, int> ma, mb;
	for (int i = 0; i < n ; ++i) {
		if (a[i] == b[i]) {
			same++;
		}
		else {
			ma[a[i]]++;
			mb[b[i]]++;
		}
	}

	for (auto p : ma) {
		diff += min(mb[p.first], p.second);
	}

	cout << same << "\n" << diff;


}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();

	// int t; cin >> t;
	// while (t--) {
	// 	solve();
	// }
	return 0;
}