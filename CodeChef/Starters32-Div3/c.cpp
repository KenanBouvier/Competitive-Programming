#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;
	vector<pair<int, int>> ans;

	bool switched = false;
	int i = 0;
	while (i < s.size()) {
		if (switched) { //ones are actually zeroes
			if (s[i] == '0') {
				ans.push_back({i + 1, s.size() - i});
				switched = !switched;
			}
		}
		else { // ones are normal ones
			if (s[i] == '1') {
				ans.push_back({i + 1, s.size() - i});
				switched = !switched;
			}
		}
		i++;
	}

	cout << ans.size() << "\n";

	for (auto p : ans) {
		cout << p.first << " " << p.second << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}