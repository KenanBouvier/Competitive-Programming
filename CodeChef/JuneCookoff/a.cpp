#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, q; cin >> n >> q;
	set<int> s;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		s.insert(a);
	}
	unordered_map<int, int> m;
	int index = 0;
	for (auto it = s.begin(); it != s.end(); ++it) {
		m[*it] = index;
		index++;
	}

	while (q--) {
		int query; cin >> query;
		auto lastIt = s.end();
		lastIt--;
		if (s.find(query) != s.end()) {
			cout << "0" << '\n';
		}
		else if (*(lastIt) < query ) {
			cout << "POSITIVE" << '\n';
		}
		else {
			auto it = s.upper_bound(query);
			int numNegatives = s.size() - m[*it];
			if (numNegatives % 2 == 0) {
				cout << "POSITIVE" << '\n';
			}
			else {
				cout << "NEGATIVE" << '\n';
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}