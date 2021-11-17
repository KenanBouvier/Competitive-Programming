#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, s; cin >> n >> s;
	int ball = n - 1;
	while (s--) {
		int origin, end; cin >> origin >> end;
		if (origin == ball) {
			ball = end;
		}
		else if (end == ball) {
			ball = origin;
		}
	}
	cout << ball;
}