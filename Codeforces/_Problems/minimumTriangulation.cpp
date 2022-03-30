#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;

	long long ans = 0;

	// E r(r+1)

	for (int r = 2; r < n; ++r) {
		ans += r * (r + 1);
	}

	cout << ans;

	return 0;
}