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
int fact(int n)
{
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	Sieve();

	int t; cin >> t;

	while (t--) {
		// want to put all primes on the right
		// total combinations of 2 numbers is nC2 where n is size of array
		// then reduce that by the number of prime pairs that don't work

		unordered_map<int, int> m; // freq map

		int n; cin >> n;
		int numPrimes = 0;
		unordered_set<int> primeTrack;
		for (int i = 0 ; i < n; ++i) {
			int a; cin >> a;
			m[a]++;
			if (prime[a]) {
				numPrimes++;
				primeTrack.insert(a);
			}
		}
		int ans = nCr(n, 2);
		ans -= nCr(numPrimes, 2);
		//now must remove the pairs of primes;
		for (int pr : primeTrack) {
			if (m[pr] > 1) {
				ans += nCr(m[pr], 2);
			}
		}
		cout << ans << '\n';

	}
	return 0;
}