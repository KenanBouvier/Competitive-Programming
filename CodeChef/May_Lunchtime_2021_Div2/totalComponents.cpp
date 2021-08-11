#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 2;

vector<bool> prime(N, true);
vector<int> prefix_prime(N);

void SieveOfEratosthenes()
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

void pre() {
	long long count = 0;
	for (int i = 0 ; i <= N; ++i) {
		if (prime[i]) {
			count++;
		}
		prefix_prime[i] = count;
	}
}

void solve() {
	long long n; cin >> n;

	if (n == 2) {
		cout << 1 << "\n";
	}
	else if (n == 3) {
		cout << 2 << "\n";
	}
	else {
		int lb = n / 2;
		int extra = prefix_prime[n] - prefix_prime[lb];
		cout << extra + 1 << '\n';
	}

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	SieveOfEratosthenes();
	pre();

	long long t; cin >> t;
	while (t--) {
		solve();
	}


	return 0;
}