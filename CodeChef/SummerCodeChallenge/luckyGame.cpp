#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		string s = to_string(n);
		bool found = false;
		for (char c : s) {
			if (c != '3' && c != '7') {
				cout << "BETTER LUCK NEXT TIME" << '\n';
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "LUCKY\n";
		}
	}
	return 0;
}