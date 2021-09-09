#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int L; cin >> L;
	int Q; cin >> Q;

	set<pair<int, int>> s;
	s.insert({0, L});

	while (Q--) {
		int c, x; cin >> c >> x;

		if (c == 1) {
			auto it = s.lower_bound({x, INT_MAX});
			it--;
			int ub = (*it).second;

			s.insert({(*it).first, x});
			s.insert({x, ub});
			s.erase(it);

		}
		else {
			auto it = s.lower_bound({x, INT_MAX});
			it--;
			cout << (*it).second - (*it).first << '\n';
		}
	}


}