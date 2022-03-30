#include <bits/stdc++.h>
using namespace std;


void solve() {
	//want two evens for both

	int n; cin >> n;

	string s = to_string(n);

	int last = s[s.size() - 1] - 48;

	for (int i = 0 ; i < s.size() - 1; ++i) {
		int num = s[i] - 48;
		if (last % 2 == 0) { //if last is even
			if (num % 2 == 0) {
				cout << "YES\n";
				return;
			}
		}
		else {
			if (num % 2 != 0) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}