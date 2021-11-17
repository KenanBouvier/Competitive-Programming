#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	map<char, int> mp;
	int letters = 0;
	int words = 1;
	int capitals = 0;

	for (char c : s) {
		if (c != ' ') {
			letters++;
			if (toupper(c) == c) {
				capitals++;
			}
			mp[tolower(c)]++;
		}
		else {
			words++;
			mp[c]++;
		}
	}
	int uniques = mp.size() - 1;

	cout << letters << "\n";
	cout << words << "\n";
	cout << capitals << "\n";
	cout << uniques << "\n";
	for (int i = s.size() - 1; i >= 0; i--) {
		cout << s[i];
	}

	return 0;
}
