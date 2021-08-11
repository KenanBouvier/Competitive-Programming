#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, k; cin >> n >> k;

	string s; cin >> s;
	vector<bool> particles(n);
	for (int i = 0 ; i < n; ++i) {
		if (s[i] == '1') {
			particles[i] = true;
		}
		else {
			particles[i] = false;
		}
	}

	int totalSum = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (particles[i] == particles[i + 1]) {
			totalSum += 2;
		}
		else {
			totalSum++;
		}
	}
	vector<int> changes(k);
	for (int i = 0 ; i < k; ++i) {
		cin >> changes[i];
	}

	if (n > 2) {
		for (int index : changes) {
			index--;
			if (index == 0) {
				if (particles[index] == particles[index + 1]) {
					totalSum -= 2;
					totalSum += 1;
				}
				else {
					totalSum -= 1;
					totalSum += 2;
				}
				particles[index] = !particles[index];
			}
			else if (index == n - 1) {
				if (particles[index] == particles[index - 1]) {
					totalSum -= 2;
					totalSum += 1;
				}
				else {
					totalSum -= 1;
					totalSum += 2;
				}

				particles[index] = !particles[index];
			}
			else {
				if (particles[index] == particles[index - 1]) {
					totalSum -= 2;
					totalSum += 1;
				}
				else {
					totalSum -= 1;
					totalSum += 2;
				}
				if (particles[index] == particles[index + 1]) {
					totalSum -= 2;
					totalSum += 1;
				}
				else {
					totalSum -= 1;
					totalSum += 2;
				}

				particles[index] = !particles[index];
			}
			cout << totalSum << "\n";
		}
	}
	else {
		if (n == 1) {
			for (int i = 0 ; i < k; ++i) {
				cout << 0 << "\n";
			}
		}
		else { // n==2
			for (int index : changes) {
				index--;

				if (index == 0) {
					if (particles[index] == particles[index + 1]) {
						totalSum -= 2;
						totalSum += 1;
					}
					else {
						totalSum -= 1;
						totalSum += 2;
					}
					particles[index] = !particles[index];
				}
				else { //index = 1
					if (particles[index] == particles[index - 1]) {
						totalSum -= 2;
						totalSum += 1;
					}
					else {
						totalSum -= 1;
						totalSum += 2;
					}
					particles[index] = !particles[index];
				}
				cout << totalSum << '\n';
			}
		}
	}
	cout << '\n';


}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		solve();
	}


	return 0;
}