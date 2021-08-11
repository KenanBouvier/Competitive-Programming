#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

bool isPalindrome(string s) {
	for (int i = 0 ; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

void solve(int caseNum) {
	int n, k; cin >> n >> k;

	string s; cin >> s;

	long long ans = 0;


	if (!isPalindrome(s)) {
		ans++;
	}

	int possibleChanges = ceil((n - 2.0) / 2.0);
	for (int i = 0 ; i < s.size(); ++i) {
		if (possibleChanges == -1) {
			break;
		}
		int diff = s[i] - 'a';
		ans += pow(k, possibleChanges) * diff;
		possibleChanges--;
	}
	cout << "Case #" << caseNum << ": " << ans % MOD << '\n';
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