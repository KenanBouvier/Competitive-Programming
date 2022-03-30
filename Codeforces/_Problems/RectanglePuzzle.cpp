#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

long double solve(long double w, long double h, long double a) {
	long double c = sqrt(((w * w) / 4) + ((h * h) / 4));
	long double d = sin(atan(h / w) + a);
	long double res = ((c * d) - h / 2) * ((c * d) - h / 2);

	return res;
}


int main() {

	ios_base::sync_with_stdio(false); cin.tie(NULL);

	long double w, h, a; cin >> w >> h >> a;

	if (a == 180) {
		cout << w*h;
		return 0;
	}

	a = a * PI / 180.0;

	long double b = 1 / tan(a) + tan(a);
	long double ans = b * (solve(w, h, a) + solve(h, w, a));
	long double final = w * h - ans;

	cout << setprecision(10);
	cout << final;

	return 0;
}