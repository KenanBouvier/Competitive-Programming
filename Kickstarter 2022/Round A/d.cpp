#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
	long long a, b; cin >> a >> b;
	long long ans = 0;
	int prevSum = 0;
	int prevProduct = 1;

	for (char c : s) {
		prevSum += (c - 48);
		prevProduct *= (c - 48);
	}

	for (int i = a + 1; i <= b; ++i) {
		string s = to_string(i);
		long long sum = prev;
		long long product = 1;
		for (char c : s) {
			sum += (c - 48);
			product *= (c - 48);
		}

		if (product % sum == 0) {
			ans++;
		}
	}



	cout << "Case #" << caseNum << ": ";
	cout << ans << '\n';
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