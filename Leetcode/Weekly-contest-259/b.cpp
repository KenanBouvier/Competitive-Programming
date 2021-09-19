#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
	int ans = 0;

	auto it = min_element(nums.begin(), nums.end());
	auto it2 = max_element(nums.begin(), nums.end());

	int minPos = it - nums.begin();
	int maxPos = it2 - nums.begin();

	// cout << minPos << " " << maxPos << endl;

	for (int i = 1; i <= nums.size() - 2; ++i) {
		bool gd = true;
		if (i > minPos && i < maxPos) {
			for (int j = 0; j < i; ++j) {
				if (nums[j] >= nums[i]) {
					gd = false;
					break;
				}
			}
			for (int k = i + 1; k <= nums.size() - 1; ++k) {
				if (nums[k] <= nums[i]) {
					gd = false;
					break;
				}
			}
		}
		else {
			gd = false;
		}

		if (gd) {
			ans += 2;
		}
		else {
			if (nums[i - 1] < nums[i] && nums[i + 1] > nums[i]) {
				ans++;
			}
		}

	}

	// cout << ans;
	return ans;
}

int main() {
	solve({2, 4, 6, 4});
	return 0;
}