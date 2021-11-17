#include<bits/stdc++.h>
using namespace std;

int main() {
	double length, width, height; cin >> length >> width >> height;
	int globalMax = 0;
	//just try all orientations

	int x = floor(width / 0.4);
	int y = floor(height / 0.5);
	int z = floor(length / 0.8);
	globalMax = max(globalMax, x * y * z);

	x = floor(width / 0.4);
	y = floor(height / 0.8);
	z = floor(length / 0.5);

	globalMax = max(globalMax, x * y * z);

	x = floor(width / 0.5);
	y = floor(height / 0.4);
	z = floor(length / 0.8);

	globalMax = max(globalMax, x * y * z);

	x = floor(width / 0.5);
	y = floor(height / 0.8);
	z = floor(length / 0.4);

	globalMax = max(globalMax, x * y * z);

	x = floor(width / 0.8);
	y = floor(height / 0.4);
	z = floor(length / 0.5);

	globalMax = max(globalMax, x * y * z);

	x = floor(width / 0.8);
	y = floor(height / 0.5);
	z = floor(length / 0.4);

	globalMax = max(globalMax, x * y * z);

	cout << globalMax;

	return 0;
}