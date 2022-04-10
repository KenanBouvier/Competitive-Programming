#include <bits/stdc++.h>
using namespace std;


void solve() {
	string s; cin >> s;

	int sze = s.size();

	string newS = "";

	char prev = s[0];
	int count = 1;
	for (int i = 1; i < s.size(); ++i) {
		char cur = s[i];
		if (prev == cur) {
			count++;
			i++;
		}
		else {
			if (count > 1) {
				if (count % 2 != 0) {
					sze++;
				}
				sze -= count;
			}
			newS += prev;

			prev = cur;
			count = 1;
		}
	}
	if (count >= 1) {
		if (count % 2 != 0) {
			sze++;
			newS += s[s.size() - 1];
		}
		sze -= count;
	}
	cout << newS << '\n';
	sze = s.size() - sze;
	// cout << sze << "\n";
	s = newS;

	//now we go through s and every time we see a repeated char we remove all those chars between
	int n =  s.size();
	unordered_map<char, int> freq;
	int between = 0;
	for (int i = 0 ; i < n; ++i) {
		freq[s[i]]++;
		if (freq[s[i]] > 1) {
			// cout << s[i] << " was paired and removed " << between - 1 << "\n";
			sze += (between - 1);
			between = 0;
			freq.clear();
		}
		else {
			between++;
			if (i == n - 1) {
				// cout << "end without pair so removed " << between << '\n';
				sze += between;
			}
		}
	}

	cout << sze << '\n';

}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int t ; cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}