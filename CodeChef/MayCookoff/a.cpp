#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int D, d, A, B, C;
		cin >> D >> d >> A >> B >> C;

		d *= D;

		if (d >= 42) {
			cout << C << '\n';
		}
		else if (d >= 21) {
			cout << B << '\n';
		}
		else if (d >= 10) {
			cout << A << '\n';
		}
		else {
			cout << 0 << '\n';
		}


	}


	return 0;
}