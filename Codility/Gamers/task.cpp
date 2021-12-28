#include <bits/stdc++.h>
using namespace std;

/*
You are given a string S of length N consisting of characters 'a' and 'b' with additional empty gaps represented by '?'. Your task is to replace every such gap with either an 'a' character or a 'b' character so that the longest fragment of S, consisting only of 'a' characters or 'b' characters, is as short as possible.

For example, for S = "aa??bbb", if you replace "??" with "aa", the longest fragment consisting of equal characters will have length 4: "aaaabbb". You can obtain a better result by replacing "??" with "ba", resulting in "aababbb". Then the longest fragment consisting of equal characters will have length 3.

Write an efficient algorithm for the following assumptions:

	string S consists only of the following characters: "a", "b" and/or "?";
	N is an integer within the range [1..100,000].
*/


// This solution is O(n)

int solution(string &s) {
	vector<int> v;
	v.push_back(0);
	char prev = s[0];
	int count = 0;
	bool question = false;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '?') {
			if (count > 0) {
				v.push_back(count);
			}
			v.push_back(0);
			question = true;
			count = 0;
			continue;
		}
		if (question) {
			prev = s[i];
			count = 1;
			question = false;
			continue;
		}
		if (s[i] == prev) {
			count++;
		}
		else {
			if (s[i] == '?') {
				v.push_back(0);
				continue;
			}
			v.push_back(count);
			count = 1;
		}
		prev = s[i];
	}
	if (count > 0) {
		v.push_back(count);
	}
	v.push_back(0);


	for (int i = 1; i < v.size() - 1; ++i) {
		if (v[i] == 0) { //question mark
			if (v[i - 1] <= v[i + 1]) { //add to left side
				v[i - 1] += 1;
				v[i] = v[i - 1];
			}
			else { // add to right side
				v[i + 1] += 1;
				v[i] = v[i + 1];
			}
		}
	}
	int mx = 0;
	for (int x : v) {
		mx = max(mx, x);
	}

	return mx;
}
int main() {
	string s; cin >> s;
	cout << solution(s);
	return 0;
}