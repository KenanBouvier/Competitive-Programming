#include <bits/stdc++.h>
using namespace std;

void solve() {
	/*
	 bfs approach spreading out +1 and -1 from the value and visiting the values
	 Keep track of furthest distance after spreading out
	*/

	int n, k; cin >> n >> k;
	unordered_map<int, int> m;
	unordered_set<int> visited;
	set<int> st;

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		m[a]++;
		st.insert(a);
	}

	vector<int>v(st.begin(), st.end());
	int ans = -1;
	pair<int, int> pairAns = { -1, -1};

	for (int i = 0; i < v.size(); ++i) { //where i represents root from spread
		if (m[v[i]] < k) {
			continue;
		}
		int maxLeft = i;
		int maxRight = i;
		int prev;
		bool escape = false;
		//leftwards
		prev = v[i];
		for (int l = i - 1; l >= 0; --l) {
			if (m[v[l]] >= k && v[l] == prev - 1 ) {
				if (visited.find(l) != visited.end()) {
					escape = true;
					break;
				}
				visited.insert(l);
				maxLeft = l;
			}
			else {
				break;
			}
			prev = v[l];
		}
		if (escape) {
			continue;
		}
		//Rightwards
		prev = v[i];
		for (int r = i + 1; r < v.size(); ++r) {
			if (m[v[r]] >= k && v[r] == prev + 1) {
				if (visited.find(r) != visited.end()) {
					escape = true;
					break;
				}
				visited.insert(r);
				maxRight = r;
			}
			else {
				break;
			}
			prev = v[r];
		}
		if (escape) {
			continue;
		}
		int absolute = abs(maxRight - maxLeft);
		if (absolute > ans) {
			ans = absolute;
			pairAns.first = v[maxLeft];
			pairAns.second = v[maxRight];
		}
	}

	if (pairAns.first == -1) {
		cout << -1 << "\n";
	}
	else {
		cout << pairAns.first << " " << pairAns.second << '\n';
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