#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;

	set<pair<int, string>> s;

	for (int i = 0 ; i < n; ++i) {
		string str; cin >> str;
		int a; cin >> a;
		s.insert({a, str});
	}
	auto it = s.end();

	it--;
	it--;
	cout << (*it).second << '\n';
	return 0;
}