#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		string a; cin >> a;
		int n = a.size();
		bool found = false;

		for (int i = 0 ; i < n; ++i) {
			int mx = a[i];
			int pos = i;

			for (int j = i + 2; j < n; j += 2) {
				if (a[j] >= mx) {
					mx = a[j];
					pos = j;
				}
			}
			if (mx != a[i]) {
				char temp = a[i];
				a[i] = a[pos];
				a[pos] = temp;
				cout << a << '\n';
				found = true;
				break;
			}
		}
		if (!found) {
			cout << a << '\n';
		}
	}

	return 0;
}