#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n; cin >> n;

	unordered_map<int, int> m; // value: position

	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		m[a] = i + 1;
	}

	for (int i = 1; i < n + 1; ++i) {
		cout << m[i] << " ";
	}

}