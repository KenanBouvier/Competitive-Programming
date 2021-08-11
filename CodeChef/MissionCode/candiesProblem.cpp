#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	vector<int> leftRight(n), rightLeft(n);
	leftRight[0] = 1;
	rightLeft[n - 1] = 1;

	for (int i = 1 ; i < n; ++i) {
		if (v[i] > v[i - 1]) {
			leftRight[i] = leftRight[i - 1] + 1;
		}
		else {
			leftRight[i] = 1;
		}
	}

	for (int i = n - 2; i >= 0; --i) {
		if (v[i] > v[i + 1]) {
			rightLeft[i] = rightLeft[i + 1] + 1;
		}
		else {
			rightLeft[i] = 1;
		}
	}

	long long ans = 0;

	for (int i = 0 ; i < n; ++i) {
		ans += max(leftRight[i], rightLeft[i]);
	}
	cout << ans << '\n';

	return 0;
}