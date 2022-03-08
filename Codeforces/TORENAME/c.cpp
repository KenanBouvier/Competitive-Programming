#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, m; cin >> n >> m;
	int ansWeight = 0;

	vector<int> positions;
	vector<pair<int, int>> wp;
	map<int, int> posToIndex;

	for (int i = 0; i < m; ++i) {
		int x, w; cin >> x >> w;
		wp.push_back({w, x});
		posToIndex[x] = i + 1;
	}

	sort(wp.begin(), wp.end());

	for (int i = 0 ; i < 2 * n; ++i) {
		ansWeight += wp[i].first;
		positions.push_back(wp[i].second);
	}

	sort(positions.begin(), positions.end());

	cout << ansWeight << "\n";

	for (int i = 0; i < positions.size() / 2; ++i) {
		int start = positions[i];
		int end = positions[positions.size() - i - 1];
		cout << posToIndex[start] << ' ' << posToIndex[end] << '\n';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}

