#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums, int k) {


	int ans = 0;

	for (int i = 0 ; i < nums.size(); ++i) {
		for (int j = 0 ; j < nums.size(); ++j) {
			if (i == j) continue;
			if (abs(nums[i] - nums[j]) == k) {
				ans++;
			}
		}
	}
	cout << ans / 2 << endl;
	return ans;

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	solve({1, 2, 2, 1}, 1);


	return 0;
}