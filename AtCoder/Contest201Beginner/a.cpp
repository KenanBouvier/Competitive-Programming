#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	vector<int> v(3);

	for (int i = 0 ; i < 3; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());


	if (v[1] - v[0] == v[2] - v[1]) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}