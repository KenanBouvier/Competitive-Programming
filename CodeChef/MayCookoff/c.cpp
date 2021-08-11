#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int t; cin >> t;
	while (t--) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;

		int yDist = y1 - x1;
		int xDist = y2 - x2;

		int curPos = 1;

		int yStartAddition = 2;
		int xStartAddition = 1;

		int yStartDist = x1 - 1;
		int xStartDist = x2 - 1;

		for (int i = 0; i < yStartDist; ++i) {
			curPos += yStartAddition;

			xStartAddition++;
			yStartAddition++;
		}
		for (int i = 0; i < xStartDist; ++i) {
			curPos += xStartAddition;

			xStartAddition++;
			yStartAddition++;
		}

		long long ans = curPos; //add starting position

		int xAddition = x2 - 1 + x1;
		int yAddition = xAddition + 1;


		for (int i = 0 ; i < yDist; ++i) {
			curPos += yAddition;
			ans += curPos;

			xAddition++;
			yAddition++;
		}
		for (int i = 0 ; i < xDist; ++i) {
			curPos += xAddition;
			ans += curPos;

			xAddition++;
			yAddition++;
		}

		cout << ans << "\n";
	}


	return 0;
}