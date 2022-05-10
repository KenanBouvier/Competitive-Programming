#include <bits/stdc++.h>
using namespace std;

void bfs(int& counter, int val, int& k, unordered_map<int, int>& m, unordered_set<int>& visited) {
	if (visited.find(val) != visited.end()) {
		return;
	}
	//not visited
	visited.insert(val);

	if (m[val] >= k) {
		counter++;
		bfs(val - 1);
		bfs(val + 1);
	}
	else {
		return
	}
}

void solve() {
	/*
	 bfs approach spreading out +1 and -1 from the value and visiting the values
	 Keep track of counter representing number of 'nodes' visted.
	*/
	int n, k; cin >> n >> k;
	unordered_map<int, int> m;
	unordered_set<int> visited;

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		m[a]++;
	}

	for (auto p : m) {
		int val = p.first;

		//bfs
		bfs(val);
		bfs(val);
	}


}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}