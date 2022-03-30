#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
	string s; cin >> s;

	long long  sum = 0;
	//divisible by 9 if sum is 9
	for (char c : s)	{
		sum += (c - 48);
	}

	long long  div = sum / 9;
	long long  rest = sum - (div * 9);
	rest = 9 - rest;

	char toAdd = rest + 48;
	if (toAdd == '9') {
		string ans = "";
		ans += s[0];
		ans += '0';
		for (int i = 1; i < s.size(); ++i) {
			ans += s[i];
		}
		// ans += '0';
		cout << "Case #" << caseNum << ": ";
		cout << ans << "\n";
		return;
	}
	//now to find location
	string ans = "";
	bool notAdded = true;

	for (int i = 0; i < s.size(); ++i) {
		int val = s[i];

		if (val > toAdd && notAdded) {
			notAdded = false;
			ans += toAdd;
		}
		ans += s[i];

	}
	if (notAdded) {
		ans += toAdd;
	}

	cout << "Case #" << caseNum << ": ";
	cout << ans << "\n";
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