#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	long long t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> v(n);
		for (int i = 0 ; i < n; ++i) {
			cin >> v[i];
		}

		int globalMax = v[0];

		for (int i = 1; i < n; ++i) {
			v[i] = max(v[i], v[i] + v[i - 1]);
			globalMax = max(globalMax, v[i]);
		}
		cout << globalMax << endl;

	}


	return 0;
}