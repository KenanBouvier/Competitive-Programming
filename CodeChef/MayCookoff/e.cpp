#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		vector<int> p(n);

		for (int i = 0 ; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0 ; i < n; ++i) {
			cin >> p[i];
		}
		int q; cin >> q;

		while (q--) {
			int query; cin >> query;

			if (query == 1) {
				int index = 0;
				vector<int> b(n);
				for (int x : p) {
					b[x - 1] = a[index];
					index++;
				}
				a = b;
			}
			else if (query == 2) {
				int a1, b1; cin >> a1 >> b1;
				swap(a[a1 - 1], a[b1 - 1]);
			}
			else {
				int index; cin >> index;
				index--;
				cout << a[index] << '\n';
			}
		}

	}


	return 0;
}