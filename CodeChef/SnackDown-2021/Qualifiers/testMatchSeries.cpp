#include <bits/stdc++.h>
using namespace std;


int main() {
	int t; cin >> t;
	while (t--) {
		// positive = England win , negative = India win
		int ans = 0;
		for (int i = 0; i < 5; ++i) {
			int a; cin >> a;
			if (a == 1) {
				ans--;
			}
			else if (a == 2) {
				ans++;
			}
		}
		if (ans > 0) {
			cout << "ENGLAND\n";
		}
		else if (ans < 0) {
			cout << "INDIA\n";
		}
		else {
			cout << "DRAW\n";
		}
	}

	return 0 ;
}