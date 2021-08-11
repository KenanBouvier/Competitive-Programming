#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	int ans = 0;
	int mx = INT_MIN;

	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		mx = max(mx, a);
		if (a > 0) {
			ans += a;
		}
	}
	if (ans == 0) {
		cout << mx << '\n';
	}
	else {
		cout << ans << "\n";
	}


	return 0;
}