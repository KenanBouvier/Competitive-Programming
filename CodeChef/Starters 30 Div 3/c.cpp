#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n; cin >> n;
	string s; cin >> s;

	unordered_map<char, pair<int, int>> m;

	string sorted = s;
	sort(sorted.begin(), sorted.end());

	for (int i = 0 ; i < s.size(); ++i) {
		if (s[i] == sorted[i] && s[s.size() - 1 - i] == sorted[s.size() - 1 - i]) {
			continue;
		}
		if (s[i] == sorted[s.size() - 1 - i] && s[s.size() - 1 - i] == sorted[i]) {
			continue;
		}

		cout << "NO\n";
		return;

	}
	cout << "YES\n";

	// for (int i = 0 ; i < sorted.size(); ++i)	{
	// 	char c = sorted[i];
	// 	m[c] = {i, sorted.size() - 2 - i};
	// }

	// for (auto p : m) {
	// 	cout << p.first << " : " << p.second.first << " " << p.second.second << "\n";
	// }
	// cout << "\n";

	// for (int i = 0; i < s.size() / 2; ++i) {
	// 	char c = s[i];

	// 	if (i != m[c].first || i != m[c].second) {
	// 		cout << "NO\n";
	// 		return;
	// 	}

	// }

	// cout << "YES\n";

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	// solve();
	int t; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}

