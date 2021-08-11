#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		long double G, P; cin >> G >> P;
		G--;

		vector<int> people(10);

		for (int i = 0 ; i < 10; ++i) {
			cin >> people[i];
		}

		long double vaccines = 0;

		for (int i = G + 1; i < 10; ++i) {
			vaccines += people[i];
		}
		int mn = ceil(((double) vaccines + 1.0) / P) ;
		int mx = ceil((vaccines + people[G]) / P);
		cout << mn << " " << mx << "\n";
	}


	return 0;
}