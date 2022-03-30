#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
	string s ; cin >> s;
	string p ; cin >> p;
	if (s.size() > p.size()) {
		cout << "Case #" << caseNum << ": " << "IMPOSSIBLE\n";
		return;
	}

	int next = 0;
	int i = 0;
	while (next < s.size()) {
		if (i >= p.size()) {
			cout << "Case #" << caseNum << ": " << "IMPOSSIBLE\n";
			return;
		}
		char cur = p[i];
		char nxt = s[next];
		if (cur == nxt) {
			next++;
			i++;
		}
		else {
			i++;
		}

	}


	cout << "Case #" << caseNum << ": ";
	cout << p.size() - s.size() << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	int caseNum = 1;
	while (t--) {
		solve(caseNum);
		caseNum++;
	}
	return 0;
}