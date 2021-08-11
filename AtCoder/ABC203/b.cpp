#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c; cin >> a >> b >> c;

	if (a == b) {
		cout << c << '\n';
	}
	else if (a == c) {
		cout << b << "\n";
	}
	else if (b == c) {
		cout << a << '\n';
	}
	else {
		cout << 0 << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}