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
	vector<pair<int, int>> sorts;
	int ans = 0;

	for (int i = n - 1; i >= 0; --i) {
		if (a[i] == b[i]) continue;
		if (a[i] == 1) {
			cout << -1 << "\n";
			return;
		}
		ans++;
		int numIs = 0;
		for (int j = i; j >= 0; --j) {
			if (b[j] != 1) {
				break;
			}
			numIs++;
		}
		int aIs = 0;
		for (int j = i ; j >= 0; --j) {
			if (a[j] == 1) {
				aIs++;
			}
			if (aIs == numIs) {
				sorts.push_back({j + 1, i + 1});
				sort(a.begin() + j, a.begin() + i + 1);
				i -= numIs;
				break;
			}
		}

	}
	cout << ans << "\n";
	for (pair<int, int> p : sorts) {
		cout << p.first << " " << p.second << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0;
}