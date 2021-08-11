#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n; cin >> n;
	vector<int> v;
	unordered_map<int, int> m;
	bool ans = true;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		m[a] ++;
		if (m[a] > 1) {
			ans = false;
		}
	}
	if (ans) {
		cout << "Yes" << '\n';
	}
	else {
		cout << "No" << '\n';
	}

	return 0;
}