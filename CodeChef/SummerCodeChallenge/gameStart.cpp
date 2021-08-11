#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while (t--) {
		int n, m; cin >> n >> m;
		map<int, int> am;
		map<int, int> bm;

		for (int i = 0 ; i < n; ++i) {
			int a; cin >> a;
			am[a]++;
		}

		for (int i = 0 ; i < m; ++i) {
			int a; cin >> a;
			bm[a]++;
		}

		bool found = false;
		for (auto p  : am) {
			if (p.second == 1 && p.first % 3 == 0 && bm.find(p.first) != bm.end() && bm[p.first] == 1) {
				found = true;
				cout << p.first << "  ";
			}
		}
		if (!found) {
			cout << -1;
		}
		cout << '\n';

	}

	return 0;
}