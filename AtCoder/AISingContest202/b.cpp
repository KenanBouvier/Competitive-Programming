#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s; cin >> s;
	reverse(s.begin(), s.end());

	for (int i = 0 ; i < s.size(); ++i) {
		if (s[i] == '6') {
			s[i] = '9';
		}
		else if (s[i] == '9') {
			s[i] = '6';
		}
	}
	cout << s << '\n';


	return 0;
}