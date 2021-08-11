#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int>v  = { -2, -3, 4, -3, -2, 1, 5, -3};

	int globalMax = v[0];

	for (int i = 1; i < v.size(); ++i) {
		v[i] = max(0, max(v[i], v[i] + v[i - 1]));
		globalMax = max(globalMax, v[i]);
	}
	cout << globalMax << endl;

	return 0;
}