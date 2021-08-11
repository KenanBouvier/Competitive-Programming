#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int x, a, b; cin >> x >> a >> b;
		int res = a + b * (100 - x);
		cout << res * 10 << '\n';
	}

	return 0;
}