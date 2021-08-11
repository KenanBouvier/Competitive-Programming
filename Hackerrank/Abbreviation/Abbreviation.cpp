#include <bits/stdc++.h>
using namespace std;

string abbreviation(string a, string b) {
	int bPos = 0;
	for (char c : a) {
		if (bPos == b.size()) {
			break;
		}
		if (c == b[bPos] || toupper(c) == b[bPos]) {
			bPos++;
		}
	}

	if (bPos == b.size()) {
		return "YES";
	}
	else {
		return "NO";
	}
}

int main() {

	cout << abbreviation("abCDefCd", "ABcD");

	return 0;
}