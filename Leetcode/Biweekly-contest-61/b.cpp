#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> changed) {

	if (changed.size() % 2 != 0 || changed.size() == 0) {
		return {};
	}

	map<int, int> m;

	for (int x : changed) {
		m[x]++;
	}

	vector<int> ans;
	sort(changed.begin(), changed.end());

	for (int x : changed) {
		int elem = x;
		if (m[elem] == 0) continue;

		if (m[elem * 2] > 0) {
			ans.push_back(elem);
			m[elem]--;
			m[elem * 2]--;
		}
		else {
			return {};
		}
	}
	return ans;

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve({2, 1});


	return 0;
}