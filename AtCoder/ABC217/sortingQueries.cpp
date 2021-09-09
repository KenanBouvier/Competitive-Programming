// #include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	vector<int> v;

	int Q; cin >> Q;
	int buffer = 0;
	int prev = 0;

	while (Q--) {
		int q; cin >> q;

		if (q == 1) {
			int x; cin >> x;
			v.push_back(x);
		}
		else if (q == 2) {
			cout << v[0 + buffer] << '\n';
			buffer++;
		}
		else if (q == 3) {
			if (prev == 3) continue;
			sort(v.begin() + buffer, v.end());
		}
		prev = q;
	}
}