#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0 ; i < n; ++i) {
		cin >> v[i];
	}
	//checking odds
	bool even;
	if (v[0] % 2 == 0) {
		even = true;
	}
	else {
		even = false;
	}

	for (int i = 0; i < n; i += 2) {
		if (v[i] % 2 == 0) {
			if (!even) {
				cout << "NO\n";
				return;
			}
		}
		else { //odd
			if (even) {
				cout << "NO\n";
				return;
			}
		}
	}

	if (v[1] % 2 == 0) {
		even = true;
	}
	else {
		even = false;
	}
	for (int i = 1; i < n; i += 2) {
		if (v[i] % 2 == 0) {
			if (!even) {
				cout << "NO\n";
				return;
			}
		}
		else { //odd
			if (even) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}