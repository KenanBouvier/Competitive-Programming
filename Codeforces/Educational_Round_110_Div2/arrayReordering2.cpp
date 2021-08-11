#include <bits/stdc++.h>
using namespace std;

const int N = 10e5 + 10;

vector<bool> prime(N, true);

void Sieve()
{
	prime[0] = prime[1] = false;

	for (long long p = 2; p * p < N; p++)
	{

		if (prime[p] == true)
		{
			for (long long i = p * p; i <= N; i += p)
				prime[i] = false;
		}
	}
}
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	Sieve();

	int t; cin >> t;

	while (t--) {
		deque<int> dq;

		int n; cin >> n;
		for (int i = 0; i < n; ++i) {
			int a; cin >> a;
			if (prime[a]) {
				dq.push_front(a);
			}
			else {
				dq.push_back(a);
			}
		}
		vector<int> v;
		while (!dq.empty()) {
			v.push_back(dq.front());
			dq.pop_front();
		}
		long long ans = 0;
		for (int i = 0 ; i < n; ++i) {
			for (int j = i + 1; j < n; ++j) {
				// cout << "gcd of " << v[i] << " and " << 2 * v[j] << " is " << gcd(v[i], 2 * v[j]) << endl;
				if (gcd(v[i], 2 * v[j]) > 1) {
					ans++;
				}
			}
		}
		cout << ans << '\n';

	}
	return 0;
}