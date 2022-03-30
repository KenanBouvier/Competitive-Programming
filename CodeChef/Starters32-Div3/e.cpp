#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;

	vector<int>a(n); //vals
	vector<int>b(n); //required days
	unordered_map<int, vector<int>> m;

	for (int i = 0 ; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0 ; i < n; ++i) {
		cin >> b[i];
	}
	for (int i = 0 ; i < n; ++i) {
		m[b[i] + 1].push_back(a[i]);
	}

	multiset<int> plans;

	long double ans = 0.0;
	vector<long long> dp(n + 1, 0);

	for (int i = 1; i < n + 1; ++i) {
		for (int possible : m[i]) {
			plans.insert(possible);
		}
		if (plans.size() == 0) {
			break;
		}
		auto it = plans.end();
		it--;
		long long mx = *it;
		dp[i] = dp[i - 1] + mx;
		plans.erase(it);

		ans = max(ans, dp[i] / (long double)i);
	}

	cout << fixed << setprecision(6);
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}