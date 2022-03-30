#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	long long sum = (1.0 / 2.0) * n * (n + 1);

	if (sum % 2 == 0) {
		unordered_set<long long> used;
		long long cur = 0;

		for (long long i = n; cur != sum / 2; --i) {
			if (cur + i <= sum / 2) {
				cur += i;
				used.insert(i);
			}
			else {
				long long last = (sum / 2) - cur;
				used.insert(last);
				cur += last;
			}

		}
		cout << "YES\n";
		cout << used.size() << '\n';
		for (long long x : used) {
			cout << x << " ";
		}
		cout << '\n';

		cout << n - used.size() << "\n";
		for (long long i = 1 ; i < n; ++i) {
			if (used.find(i) == used.end()) {
				cout << i << " ";
			}
		}


	}



	else {
		cout << "NO\n";
	}

	return 0;
}