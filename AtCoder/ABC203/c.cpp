#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	unordered_map<long long, long long> m;

	for (int i = 0; i < n; ++i) {
		long long a; cin >> a;
		long long b; cin >> b;
		m[a] += b;
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}