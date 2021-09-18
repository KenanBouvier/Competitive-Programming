#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s; cin >> s;
	long long int k; cin >> k;
	pair<long long int, long long int> pos = {0, 0};

	set<pair<long long int, long long int>> grid;
	grid.insert({0, 0});

	long long int ans = 1;
// first loop
	for (int times = 0 ; times < 100; ++times) {
		for (char c : s) {
			if (c == 'U') {
				pos.first -= 1;
				if (grid.find(pos) == grid.end()) {
					ans++;
					grid.insert(pos);
				}
			}
			else if (c == 'D') {
				pos.first += 1;
				if (grid.find(pos) == grid.end()) {
					ans++;
					grid.insert(pos);
				}
			}
			else if (c == 'R') {
				pos.second += 1;
				if (grid.find(pos) == grid.end()) {
					ans++;
					grid.insert(pos);
				}
			}
			else if (c == 'L') {
				pos.second -= 1;
				if (grid.find(pos) == grid.end()) {
					ans++;
					grid.insert(pos);
				}
			}
		}
	}

	// cout << ans << " AFter first 10 loops" << endl;

// after first loop:
	long long int clean = 0;

	for (char c : s) {
		if (c == 'U') {
			pos.first -= 1;
			if (grid.find(pos) == grid.end()) {
				clean++;
				grid.insert(pos);
			}
		}
		else if (c == 'D') {
			pos.first += 1;
			if (grid.find(pos) == grid.end()) {
				clean++;
				grid.insert(pos);
			}
		}
		else if (c == 'R') {
			pos.second += 1;
			if (grid.find(pos) == grid.end()) {
				clean++;
				grid.insert(pos);
			}
		}
		else if (c == 'L') {
			pos.second -= 1;
			if (grid.find(pos) == grid.end()) {
				clean++;
				grid.insert(pos);
			}
		}
	}
	// cout << clean << " per loop now" << endl;
	ans += clean * (k - 10);

	cout << ans << "\n";

	return 0;
}

//UUU RR DDD RRR UUUU R D LL UU RRR DDDDDD LLLLLL U
