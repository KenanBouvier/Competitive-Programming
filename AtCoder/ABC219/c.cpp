#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string x; cin >> x;
	int n; cin >> n;

	set<pair<string, string>> st;

	for (int i = 0; i < n; ++i) {
		string s; cin >> s;
		string newString = "";

		for (unsigned int j = 0; j < s.size(); ++j) {
			char c = s[j];
			int ascii = (int)c - 97;
			newString += x[ascii];
		}
		st.insert({newString, s});
	}

	for (auto p : st) {
		cout << p.second << '\n';
	}

	return 0;
}
