#include <bits/stdc++.h>
using namespace std;



void solve() {
	long long int n; cin >> n;
	vector<long long int> v(n);
	for (long long int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	if (n == 1) {
		cout << 0 << '\n';
		return;
	}

	long long int il = 1;
	long long int ir = n - 2;

	long long int left = v[0];
	long long int right = v[n - 1];
	long long int ans = 0;

	while (il <= ir) {
		if (left == right) {
			ans = n - (ir + 1) + il;
			// cout << ans << " is an option\n";
		}
		if (left < right) {
			left += v[il];
			il++;
		}
		else {
			right += v[ir];
			ir--;
		}

		// cout << left << " : " << right << " with indexes: " << il << "," << ir << "\n";
	}
	if (left == right) {
		ans = n;
	}

	cout << ans << '\n';

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}