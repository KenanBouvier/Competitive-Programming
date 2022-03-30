#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	vector<int> evens, odds;

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		if (a % 2 == 0) {
			evens.push_back(a);
		}
		else {
			odds.push_back(a);
		}
		a = a % 2;
		if (a == 0) {
			a = 2;
		}
		v[i] = a;
	}

	sort(v.begin(), v.end());
	int ans = 0;

	for (int i = 1; i < n; ++i) {
		ans += (v[i] * v[i - 1]);
	}
	if (ans % 2 == 0) {
		cout << -1 << "\n";
	}
	else {
		for (int i = 0; i < odds.size(); ++i) {
			cout << odds[i] << " ";
		}
		for (int i = 0; i < evens.size(); ++i) {
			cout << evens[i] << " ";
		}
		cout << "\n";
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