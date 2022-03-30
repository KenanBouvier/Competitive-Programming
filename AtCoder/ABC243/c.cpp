#include <bits/stdc++.h>
using namespace std;


void solve() {

	long long  n; cin >> n;
	vector<pair<long long , long long >> vp;
	for (long long  i = 0 ; i < n; ++i) {
		long long  x, y; cin >> x >> y;
		vp.push_back({x, y});
	}
	string s; cin >> s;
	map<long long , vector<pair<long long , long long >>> m; // ypos,[{xpos,dir}]
	for (long long  i = 0; i < n; ++i) {
		long long  x = vp[i].first;
		long long  y = vp[i].second;
		char dir = s[i];

		m[y].push_back({x, dir});
	}

	for (auto p : m) {
		vector<pair<long long , long long >> vec = p.second;

		long long  smallestRight = INT_MAX;
		long long  biggestLeft = INT_MIN;

		for (auto p2 : vec) {
			if (p2.second == 'L') {
				biggestLeft = max(biggestLeft, p2.first);
			}
			else { //p2.second=='R'
				smallestRight = min(smallestRight, p2.first);
			}
		}
		if (biggestLeft > smallestRight) {
			cout << "Yes";

			return;
		}
	}
	cout << "No";
	return;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	// long long  t; cin >> t;
	// while (t--) {
	// 	solve();
	// }
	return 0;
}