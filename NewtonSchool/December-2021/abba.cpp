#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;

	unordered_map<int, int> m;
	int mx = 0;
	for (char c : s) {
		m[c]++;
		mx = max(mx, m[c]);
	}

	cout << n - mx;


	return 0;
}
