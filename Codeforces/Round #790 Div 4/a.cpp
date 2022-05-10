#include <bits/stdc++.h>
using namespace std;

int val(char c) {
	return (int)c + 48;
}

void solve() {
	string s ; cin >> s;

	int first = 0;
	int last = 0;

	for (int i = 0; i < 6; ++i) {
		cout << val(s[i]) << ' ';
		if (i < 3) {
			first += val(s[i]);
		}
		else {
			last += val(s[i]);
		}
	}

	if (first == last) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
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