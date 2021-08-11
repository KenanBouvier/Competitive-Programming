#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	long long n, q; cin >> n >> q;
	long long mx = INT_MIN;
	unordered_map<long long, long long> exists;
	for (int i = 0; i < n; ++i) {
		long long a; cin >> a;
		mx = max(mx, a);
		exists[a]++;
	}
	vector<int> v;

	for (long long i = 1; i <= mx + 1; ++i) {
		if (exists[i] == 0) {
			v.push_back(i);
		}
	}

	while (q--) {
		unsigned long long k; cin >> k;
		k--;
		if (k < v.size()) {
			cout << v[k] << '\n';
		}
		else {
			cout << v[v.size() - 1] + (k + 1) - v.size() << '\n';
		}
	}

	return 0;
}