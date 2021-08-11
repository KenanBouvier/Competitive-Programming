#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;
string str;
long long ans = 0;

bool isPalindrome(string s) {
	for (int i = 0 ; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

void printAllKLengthRec(vector<char> set, string prefix, int n, int k) {

	// Base case: k is 0,
	if (k == 0)
	{
		if (isPalindrome(prefix)&&) {
			if (prefix < str) {
				ans++;
			}
		}
		return;
	}

	for (int i = 0; i < n; i++)
	{
		string newPrefix;

		// Next character of input added
		newPrefix = prefix + set[i];

		// k is decreased, because
		// we have added a new character
		printAllKLengthRec(set, newPrefix, n, k - 1);
	}

}


void solve(int caseNum) {
	int n, k; cin >> n >> k;
	cin >> str;
	ans = 0;

	vector<char> possible;

	for (int i = 97; i < 97 + k; ++i) {
		possible.push_back(char(i));
	}

	printAllKLengthRec(possible, "", possible.size(), n);

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