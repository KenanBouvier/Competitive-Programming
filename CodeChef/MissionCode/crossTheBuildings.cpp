#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, myBlocks; cin >> n >> myBlocks;

	vector<long long> heights(n);

	for (long long i = 0 ; i < n; ++i) {
		cin >> heights[i];
	}

	for (int i = 0 ; i < n - 1; ++i) {
		myBlocks += (heights[i] - heights[i + 1]);
		if (myBlocks < 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve();

	return 0;
}