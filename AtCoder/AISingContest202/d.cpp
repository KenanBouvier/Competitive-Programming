#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int A, B;
	cin >> A >> B;
	long long int K; cin >> K;

	string cur = "";

	for (int i = 0 ; i < A; ++i) {
		cur += 'a';
	}
	for (int i = 0 ; i < B; ++i) {
		cur += 'b';
	}
	cout << cur << '\n';
	int order = 1;

	int aRight = 1;
	int leftB = 0;

	//last a index = A
	int indexToSwap = A - 1;
	int nextIndex = A - 2;

	while (order != K) {
		if (indexToSwap == A + B - 1 || cur[indexToSwap + 1] == 'a') {



			// indexToSwap = nextIndex;
			// nextIndex--;

			leftB++;
		}

		cur[indexToSwap + 1] = 'a';
		cur[indexToSwap] = 'b';

		indexToSwap++;

		order++;
		cout << cur << "\n";
	}

	// cout << cur << '\n';


	return 0;
}