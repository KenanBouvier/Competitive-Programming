#include <bits/stdc++.h>
using namespace std;

int solve2(vector<int>& v) {
	int ans = 0;
	int prev = 0;
	for (int i = 0 ; i < v.size(); ++i) {
		int x = v[i];
		ans += max(x - prev, 0);
		prev = x;
	}
	return ans;
}

void solve() {
	int n; cin >> n;
	vector<int> p(n); //desired
	vector<int> t(n); //start

	//first we can reduce it to a transform from a zero vector to make calculation easier.
	vector<int> transformed(n)	;

	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> t[i];
	}

	for (int i = 0 ; i < n; ++i) {
		transformed[i] = p[i] - t[i];
	}

	cout << solve2(transformed) << "\n";
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0;
}
