#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n; cin >> n;

	int ans = INT_MAX;

	while (n--) {
		int a, b, c; cin >> a >> b >> c;

		int intervalSize = b - a + 1;
		if (c <= intervalSize) {
			ans = min(ans, c);
		}

	}
	cout << ans;

	return 0;
}
