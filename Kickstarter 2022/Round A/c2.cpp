#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	for (int i = 0 ; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

void solve(int caseNum) {
	int n; cin >> n;

	string s; cin >> s;

	vector<dequeue<char>> possible;


	for (int i = 0; i < n; ++i) {
		for ()
		}


}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	int caseNum = 1;
	while (t--) {
		cout << "Case #" << caseNum << ": ";
		solve();
		caseNum++;
	}
	return 0;
}