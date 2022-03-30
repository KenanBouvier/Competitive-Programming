#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;

	string ans = "";

	int numOnes = 0;

	for (char c : s) {
		if (c == '0') {
			ans += '0';
		}
		else {
			numOnes++;
		}
	}

	for (int i = 0 ; i < numOnes; ++i) {
		ans += '1';
	}


	cout << ans << "\n";

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// solve();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

