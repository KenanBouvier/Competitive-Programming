#include <bits/stdc++.h>

using namespace std;

int fact(int i) {
	if (i <= 1) return 1;
	else return i * fact(i - 1);
}

int nChoosek( int n, int k )
{
	if (k > n) return 0;
	if (k * 2 > n) k = n - k;
	if (k == 0) return 1;

	int result = n;
	for ( int i = 2; i <= k; ++i ) {
		result *= (n - i + 1);
		result /= i;
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s; cin >> s;
	vector<int> yes, no , maybe;

	for (int i = 0 ; i < 10; ++i) {
		if (s[i] == 'o') {
			yes.push_back(i);
		}
		else if (s[i] == 'x') {
			no.push_back(i);
		}
		else {
			maybe.push_back(i);
		}
	}

	if (yes.size() > 4 || yes.size() == 0 && maybe.size() == 0) {
		cout << 0 << '\n';
	}
	else if (yes.size() == 4) {
		cout << fact(4) << '\n';
	}
	else if (yes.size() == 3) {
		cout << 3 * (fact(4) / fact(2)) + maybe.size() * fact(4);
	}
	else if ( yes.size() == 2) {
		cout << 2 * (fact(4) / fact(3)) + (fact(4) / (fact(2)*fact(2))) + maybe.size() * (fact(4) / fact(2)) + nChoosek(maybe.size(), 2) * fact(4);
	}
	else if (yes.size() == 1) {
		cout << 1 + maybe.size()*(fact(4) / fact(3)) + maybe.size()*(fact(4) / fact(3)) + maybe.size()*(fact(4) / (fact(2)*fact(2))) + nChoosek(maybe.size(), 2)*(fact(4) / fact(2)) + nChoosek(maybe.size(), 3)*fact(4);
	}
	else {
		cout << maybe.size() + nChoosek(maybe.size(), 2)*(fact(4) / (fact(2)*fact(2))) + nChoosek(maybe.size(), 3)*(fact(4) / fact(2)) + nChoosek(maybe.size(), 4)*fact(4);
	}

	return 0;
}