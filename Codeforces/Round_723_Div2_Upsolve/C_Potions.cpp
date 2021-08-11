#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> potions(n);

	for (int i = 0 ; i < n; ++i) {
		cin >> potions[i];
	}

	multiset<long long> negatives;
	long long health = 0;
	long long ans = 0;
	for (int i = 0 ; i < n; ++i) {
		long long potion = potions[i];

		if (potion >= 0) {
			health += potion;
			ans++;
		}
		else if (health + potion >= 0) {
			negatives.insert(potion);
			health += potion;
			ans++;
		}
		else {
			auto smallestNegative = negatives.begin();
			if (potion > *smallestNegative) {
				health += potion - *smallestNegative;
				negatives.erase(smallestNegative);
				negatives.insert(potion);
			}
		}
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	solve();
	return 0;
}