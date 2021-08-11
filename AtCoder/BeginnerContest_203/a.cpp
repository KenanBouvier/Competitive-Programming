#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;

	long long ans = 0;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= k; ++j) {
			long long room = stoi(to_string(i) + '0' + to_string(j));
			ans += room;
		}
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}