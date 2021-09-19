#include<bits/stdc++.h>
using namespace std;

int solve(vector<string> operations) {
	int x = 0;
	for (string s : operations) {
		if (s[1] == '+') {
			x++;
		}
		else {
			x--;
		}
	}
	cout << x;
	return x;
}

int main() {


	solve({"++X", "++X", "X++"});
	return 0;
}