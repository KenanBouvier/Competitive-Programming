#include <bits/stdc++.h>
using namespace std;



void solve() {
	int a, b; cin >> a >> b;
	if (a == 0) {
		cout << 1 << '\n';
	}
	else {
		cout << 1 + a + b * 2 << '\n';
	}
	// for (int i = 1 ; true; ++i) {
	// 	int remainder = i;
	// 	//using twos;
	// 	if (remainder <= 2 * b) {
	// 		remainder %= 2;
	// 	}
	// 	else {
	// 		remainder -= (2 * b);
	// 	}
	// 	if (remainder > a) {
	// 		cout << i << "\n";
	// 		return;
	// 	}
	// }
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}