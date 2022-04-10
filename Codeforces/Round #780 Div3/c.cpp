#include <bits/stdc++.h>
using namespace std;


void solve() {
	string s; cin >> s;

	int sze = s.size();

	string newS = "";

	char prev = s[0];
	int count = 1;
	for (int i = 1; i < s.size(); ++i) {
		char cur = s[i];
		if (prev == cur) {
			count++;
			i++;
		}
		else {
			if (count > 1) {
				if (count % 2 != 0) {
					sze++;
				}
				sze -= count;
			}
			newS += prev;

			prev = cur;
			count = 1;
		}
	}
	if (count >= 1) {
		if (count % 2 != 0) {
			sze++;
			newS += s[s.size() - 1];
		}
		sze -= count;
	}
	cout << newS << '\n';
	s = newS;
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}