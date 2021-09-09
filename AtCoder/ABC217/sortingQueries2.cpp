#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


void display(auto v) {
	for (auto x : v) {
		cout << x << ' ';
	}
	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	vector<int> v;
	multiset<int> s;

	int Q; cin >> Q;
	int buffer = 0;

	while (Q--) {
		int q; cin >> q;

		if (q == 1) {
			int x; cin >> x;
			v.push_back(x);
			s.insert(x);
		}
		else if (q == 2) {
			cout << v[0 + buffer] << '\n';
			auto it = s.find(v[0 + buffer]);
			buffer++;
			s.erase(it);
		}
		else if (q == 3) {
			buffer = 0;
			vector<int> temp(s.begin(), s.end());
			v = temp;
		}

		// cout << "----------------------" << q << "-------------------------" << '\n';
		// cout << "vec" << '\n';
		// display(v);
		// cout << '\n';
		// cout << "set" << '\n';
		// display(s);
	}
}