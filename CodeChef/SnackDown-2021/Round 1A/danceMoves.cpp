#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;

	while (t--) {
		int x, y; cin >> x >> y;

		if (y < x) {
			cout << abs(y - x) << '\n';
		}
		else {
			int diff = y - x;
			if (diff % 2 == 0) {
				cout << diff / 2 << '\n';
			}
			else {
				cout << diff / 2 + 2 << '\n';
			}
		}

	}

	return 0;
}