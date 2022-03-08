#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long int l, r, a; cin >> l >> r >> a;

	long long int mod = r % a;

	long long int newVal = max(r - mod - 1, l);
	long long int mod2 = newVal % a;

	long long int pos1 = (int)(r / a) + mod;
	long long int pos2 = (int)(newVal / a) + mod2;

	cout << max(pos1, pos2) << "\n";

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}

