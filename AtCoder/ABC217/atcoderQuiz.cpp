#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	vector<string> v;

	for (int i = 0; i < 3; ++i) {
		string s; cin >> s;
		v.push_back(s);
	}

	if (find(v.begin(), v.end(), "ABC") == v.end()) {
		cout << "ABC";
	}
	else if (find(v.begin(), v.end(), "ARC") == v.end()) {
		cout << "ARC";
	}
	else if (find(v.begin(), v.end(), "AGC") == v.end()) {
		cout << "AGC";
	}
	else if (find(v.begin(), v.end(), "AHC") == v.end()) {
		cout << "AHC";
	}
}