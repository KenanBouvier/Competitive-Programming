#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while (t--)	{
		int a, b; cin >> a >> b;

		if (max(a, b) > 2 * min(a, b)) {
			cout << "NO\n";
			continue;
		}

		if ((2 * min(a, b) - max(a, b)) % 3 == 0) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}