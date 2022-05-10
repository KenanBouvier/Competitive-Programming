#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0 ; i < n; ++i) {
		cin >> v[i];
	}

	bool even;
	int ans = 0;
	int pos = 0;

	while (pos != n - 1) {
		if (v[pos] % 2 == 0) {
			even = true;
		}
		else {
			even = false;
		}
		bool moved = false;

		if (v[pos + 1] % 2 == 0 && even) { //same parity
			for (int j = pos + 1; j < n; ++j) {
				if (v[j] % 2 != 0) {
					pos = j;
					moved = true;
					break;
				}
			}
		}
		else if (v[pos + 1] % 2 != 0 && !even) { //same parity
			for (int j = pos + 1; j < n; ++j) {
				if (v[j] % 2 == 0) {
					pos = j;
					moved = true;
					break;
				}
			}
		}
		else if (v[pos + 1] % 2 != 0 && even) {
			for (int j = pos + 1; j < n; ++j) {
				if (v[j] % 2 == 0) {
					pos = j;
					moved = true;
					break;
				}
			}
		}
		else if (v[pos + 1] % 2 == 0 && !even) { //diff parity
			for (int j = pos + 1; j < n; ++j) {
				if (v[j] % 2 != 0) {
					pos = j;
					moved = true;
					break;
				}
			}
		}

		if (!moved) {
			pos++;
		}
		ans++;
	}
	cout << ans << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}