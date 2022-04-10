#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	int evens = 0;
	int odds = 0;
	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		if (a % 2 == 0) {
			evens++;
		}
		else {
			odds++;
		}
	}

	if (odds % 2 != 0) {
		cout << evens << "\n";
		return;
	}

	// even number of odds
	int pos1 = odds / 2;
	int pos2 =	evens;


	cout << min(pos1, pos2) << "\n";


}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}