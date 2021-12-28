#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

/*
	I want to check if uniques needed for nextC is satisfied. If so we recurse with it2 being the next pair.
	Base case we end when original c is 0 or value i is bigger than p.second

*/

void recurse(auto& it2, auto& st, auto& us, auto& uniques, auto& p, auto& c) {
	if (it2 != st.end()) {
		pair<int, pair<int, int>> pr2 = *it2;
		pair<int, int> p2 = {pr2.first, pr2.second.first}; // next pair
		int nextC = pr2.second.second; // next uniques needed
		//optimal increment - next pairs min to max of this pair

		for (int i = p2.first; uniques < c && i <= p.second && nextC > 0; ++i) {
			if (us.find(i) == us.end()) { // add to set
				us.insert(i);
				// cout << i << " added\n";
				uniques++;
				nextC--; // we decrease the uniques left for next pair
			}
		}
		// either used all uniques,
		if (nextC == 0 && uniques < c) {
			auto nextIt = it2;
			nextIt++;
			recurse(nextIt, st, us, uniques, p, c);
		}
		return;
	}
}
int main() {
	int n; cin >> n;
	set<pair<int, pair<int, int>>> st;
	while (n--) {
		int a, b, c; cin >> a >> b >> c;
		pair<int, pair<int, int>> p = {a, {b, c}};
		st.insert(p);
	}

	unordered_set<int> us;

	for (auto it = st.begin(); it != st.end(); ++it) {
		pair<int, pair<int, int>> pr = *it;
		pair<int, int> p = {pr.first, pr.second.first};
		int c = pr.second.second;
		int uniques = 0;
		//initial uniques overlap before inserting
		for (int i = p.first; i <= p.second; ++i) {
			if (us.find(i) != us.end()) { //found overlap
				uniques++;
			}
		}
		// finish initial check
		auto it2 = it;
		it2++;
		recurse(it2, st, us, uniques, p, c);
		// end optimal increment

		//next optimal - anything else
		for (int i = p.second; uniques < c; --i) {
			if (us.find(i) == us.end()) { // add to set
				us.insert(i);
				// cout << i << " added\n";
				uniques++;
			}
		}
	}
	for (int x : us) {
		cout << x << " ";
	}
	cout << "\n";
	cout << us.size();

	return 0;
}
/*
4
1 10 2
3 4 1
5 6 1
6 8 1

3,5,6
should get : 3,6

*/
