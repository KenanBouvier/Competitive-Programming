#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> nums) {
	int ans = 0;
	vector<bool> beauty2(nums.size(), false);

	auto it = min_element(nums.begin(), nums.end());
	auto it2 = max_element(nums.begin(), nums.end());

	int minPos = it - nums.begin();
	int maxPos = it2 - nums.begin();

	multiset<int> start, end;

	for (int i = 0; i <= minPos; ++i ) {
		beauty2[i] = false;
		start.insert(nums[i]);
	}
	for (int i = maxPos; i < nums.size(); ++i) {
		beauty2[i] = false;
	}

	for (int i = minPos + 2; i < nums.size(); ++i) {
		beauty2[i] = false;
		end.insert(nums[i])	;
	}

	// for (auto x : end) {
	// 	cout << x << " ";
	// }

	// return 1;

	for (int midPos = minPos + 1; midPos < maxPos; ++midPos) {
		int mid = nums[midPos];

		auto itEnd = end.begin(); //smallest on right
		auto itStart = start.end(); //biggest on left
		itStart--;

		// cout << "mid: " << mid << '\n';

		// cout << *itEnd << " is smallest on right" << '\n';
		// cout << *itStart << " is biggest on left" << '\n';
		// cout << "\n";

		if (*itEnd <= mid || *itStart >= mid) {
			beauty2[midPos] = false;
		}
		else {
			beauty2[midPos] = true;
		}
		start.insert(mid);
		auto itit = lower_bound(end.begin(), end.end(), nums[midPos + 1]);
		end.erase(itit); //could be bad if last element possible !!

		// cout << mid << " ";
	}

	// for (bool gd : beauty2) {
	// 	cout << gd << " ";
	// }
	// return 1;

	for (int i = 1; i <= nums.size() - 2; ++i) {
		if (beauty2[i]) {
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
	solve({1, 2, 3});
	return 0;
}