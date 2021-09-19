#include<bits/stdc++.h>
using namespace std;

class DetectSquares {
public:
	vector<vector<bool>> grid;
	DetectSquares() {
		vector<vector<bool>> temp(1001, vector<bool>(1001, false));
		grid = temp;
	}

	void add(vector<int> point) {
		grid[point[0]][point[1]] = true;
	}

	int count(vector<int> point) {
		return 5;
	}
};


int main() {

	DetectSquares* obj = new DetectSquares();
	obj->add({3, 10});
	obj->add({11, 2});
	obj->add({3, 2});
	cout << obj->count({11, 10});
	cout << obj->count({14, 8});
	obj->add({11, 2});
	cout << obj->count({11, 10});

	return 0;
}