#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s1, s2, s3; cin >> s1 >> s2 >> s3;
	string t; cin >> t;

	string ans = "";
	for (char c : t) {
		if (c == '1') {
			ans += s1;
		}
		else if (c == '2') {
			ans += s2;
		}
		else {
			ans += s3;
		}
	}
	cout << ans << '\n';


	return 0;
}