#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b, c, d, K; cin >> a >> b >> c >> d >> K;


	int yDist = abs(a - c);
	int xDist = abs(b - d);
	if (K < xDist + yDist) {
		cout << "NO\n";
		return;
	}
	if ((K - (xDist + yDist)) % 2 == 0) {
		cout << "YES\n";
		return;
	}
	cout << "NO\n";



}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}