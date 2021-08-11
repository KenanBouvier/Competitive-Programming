#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> v(n);
		for (int i = 0 ; i < n; ++i) {
			cin >> v[i];
		}

		if (n == k) {
			cout << 0 << '\n';
			continue;
		}


		int mn = n;
		unordered_set<int> tried;

		for (int i = 0 ; i < n - k; ++i) {

			int cur = 0;
			for (int j = i ; j < i + k; ++j) {
				cur += v[j];
			}
			if (tried.find(cur) != tried.end()) continue;
			tried.insert(cur);

			int swaps = 0;

			vector<int> a = v;
			int firstIndex = i;
			int nextIndex = i + k;
			for (int j = i ; j < n - k; ++j) {
				if (a[firstIndex] == a[nextIndex]) {
					firstIndex++;
					nextIndex++;
				}
				else {
					swaps++;
					a[nextIndex] = a[firstIndex];
					firstIndex++;
					nextIndex++;
				}
			}
			// reverse direction
			firstIndex = i + k - 1;
			nextIndex = i - 1;
			// cout << firstIndex << " " << nextIndex << " are the indexes" << '\n';

			for (int j = firstIndex; j >= k; --j) {
				if (a[firstIndex] == a[nextIndex]) {
					firstIndex--;
					nextIndex--;
				}
				else {
					swaps++;
					a[nextIndex] = a[firstIndex];
					firstIndex--;
					nextIndex--;
				}
			}
			// cout << swaps << " swaps for size " << cur << '\n';
			mn = min(swaps, mn);
		}

		cout << mn << '\n';
	}


	return 0;
}