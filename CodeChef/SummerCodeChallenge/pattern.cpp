#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		int numIs = 0;
		string cur = "";

		for (int i = 1 ; i <= n; ++i) {

			for (int j = 0 ; j < numIs; ++j) {
				cur += '*';
			}
			cur += i + 48;
			numIs ++;
			cout << cur << '\n';
		}
	}
	return 0;
}