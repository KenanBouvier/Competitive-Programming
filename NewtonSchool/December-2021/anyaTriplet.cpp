#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n; cin >> n;
	int mxC = 0;
	set<pair<int, int>> st;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		mxC = max(mxC, c);
		pair<int, int> p = {a, b};
		st.insert(p);
	}

	int prev = -1;
	vector<int> v;
	int ans = 0;
	for (auto it = st.begin(); it != st.end(); ++it) {
		pair<int, int> p = *it;

		if (prev < p.first || prev > p.second) {
			ans++;
			prev = p.second;
			v.push_back(prev);
		}

	}
	cout << max(ans, mxC) << '\n';

	for (int x : v) {
		cout << x << " ";
	}

	return 0;
}
