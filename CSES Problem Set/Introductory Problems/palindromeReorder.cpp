#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;

	unordered_map<char, int> m;

	for (char c : s) {
		m[c] ++;
	}

	int numOdds = 0;

	for (auto p : m) {
		if (p.second % 2 != 0) {
			numOdds++;
		}
	}
	if (numOdds > 1) {
		cout << "NO SOLUTION";
		return 0;
	}

	string ans = "";

	char mid = '1';
	for (auto p : m) {
		if (p.second % 2 != 0) {
			mid = p.first;
		}
		for (int i = 0; i < p.second / 2; ++i) {
			ans += p.first;
		}
	}
	string cpy = ans;
	if (mid != '1') {
		ans += mid;
	}

	for (int i = cpy.size() - 1; i >= 0; --i) {
		ans += cpy[i];
	}
	cout << ans;

	return 0;
}