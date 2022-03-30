#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (int i = 0 ; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[min(k, n - 1)] << '\n';

}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}