#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
		vector<int> v = {s1, s2, s3, s4};
		vector<int> copy = v;
		sort(v.begin(), v.end());

		int maxVal = v[3];
		int maxVal2 = v[2];

		if (max(s1, s2) == maxVal && min(s1, s2) == maxVal2) {
			cout << "NO\n";
		}
		else if (max(s3, s4) == maxVal && min(s3, s4) == maxVal2) {
			cout << "NO\n";
		}
		else {
			cout << "YES\n";
		}
	}
	return 0;
}