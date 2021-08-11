#include <bits/stdc++.h>
using namespace std;

long long minDiff(deque<int> dq) {

	long long leftSum = 0;
	long long rightSum = 0;

	while (!dq.empty()) {
		if (leftSum < rightSum) {
			leftSum += dq.back();
			dq.pop_back();
		}
		else if (rightSum < leftSum) {
			rightSum += dq.front();
			dq.pop_front();
		}
		else {
			leftSum += dq.back();
			dq.pop_back();
		}

	}
	return abs(leftSum - rightSum);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;
	deque<int> dq;
	for (int i = 0 ; i < n; ++i) {
		int a; cin >> a;
		dq.push_back(a);
	}
	for (int i = 0; i < n; ++i) {
		if (i == n - 1) {
			cout << minDiff(dq);
		}
		else {
			cout << minDiff(dq) << " ";
		}
		int f = dq.front();
		dq.pop_front();
		dq.push_back(f);
	}
	cout << '\n';


}