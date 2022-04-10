#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m; cin >> n >> m;

	string s; cin >> s;
	string a; cin >> a;
	int j = 0; //the index for next char in subsequence
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == a[j]) {
			j++;
		}
		else if (s[i] == '?') {
			if (a[j] == 'a') {
				s[i] = 'b';
			}
			else {
				s[i] = 'a';
			}
		}
	}
	if (j == a.size()) {
		cout << -1 << '\n';
	}
	else {
		cout << s << '\n';
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