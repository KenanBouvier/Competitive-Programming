#include <bits/stdc++.h>

using namespace std;

int findMiddleIndex(vector<int> nums) {

	if (nums.size() == 1) return 0;

	int rightSum = accumulate(nums.begin() + 1, nums.end(), 0);
	int leftSum = 0;

	for (unsigned int i = 1; i < nums.size(); ++i) {
		// cout << leftSum << " " << rightSum << '\n';
		if (rightSum == leftSum) {
			return i - 1;
		}
		leftSum += nums[i - 1];

		rightSum -= nums[i];

	}
	if (leftSum == rightSum) {
		return nums.size() - 1;
	}
	return -1;
}

int main() {


	cout << findMiddleIndex({2, 3, -1, 8, 4});
	cout << findMiddleIndex({1, -1, 4});
	cout << findMiddleIndex({2, 5});
	cout << findMiddleIndex({1});
}