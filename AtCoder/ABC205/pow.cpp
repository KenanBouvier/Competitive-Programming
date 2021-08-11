#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int a, b, c; cin >> a >> b >> c;
	// a^c    b^c

	//if both positive
	if (a == b) {
		cout << "=" << endl;
		return 0;
	}

	if (a > 0 && b > 0) {
		if (a > b) {
			cout << ">" << endl;
		}
		else if (a < b) {
			cout << "<" << endl;
		}
	}

	else if (c % 2 == 0) { //even power means changes sign
		if (abs(a) > abs(b)) {
			cout << ">" << "\n";
		}
		else if (abs(a) < abs(b)) {
			cout << "<" << '\n';
		}
		else {
			cout << "=" << '\n';
		}
	}
	else {
		if (a > b) {
			cout << ">" << "\n";
		}
		else if (a < b) {
			cout << "<" << '\n';
		}
		else {
			cout << "=" << '\n';
		}
	}

	return 0;
}