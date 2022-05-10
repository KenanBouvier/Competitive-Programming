#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	if (n % 4 == 0) {
		if (k == 1) {
			cout << "On\n";
		}
		else {
			cout << "Off\n";
		}
	}
	else {
		if (k == 0) {
			cout << "On\n";
		}
		else {
			cout << "Ambiguous\n";
		}
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