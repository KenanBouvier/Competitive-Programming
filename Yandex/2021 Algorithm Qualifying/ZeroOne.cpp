#include <bits/stdc++.h>

using namespace std;

int main() {
	// ios_base::sync_with_stdio(false); cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;


	string str1 = "";
	string str2 = "";

	for (int i = 0; i < s1.size();) {
		if (s1[i] == 'o') { // is a one
			str1 += '1';
			i += 3;
		}
		else { //is a zero
			str1 += '0';
			i += 4;
		}
	}
	for (int i = 0; i < s2.size();) {
		if (s2[i] == 'o') { // is a one
			str2 += '1';
			i += 3;
		}
		else { //is a zero
			str2 += '0';
			i += 4;
		}
	}

	if (str1.size() > str2.size()) {
		cout << '>';
		return 0;
	}
	else if (str2.size() > str1.size()) {
		cout << '<';
		return 0;
	}
	else {//same size
		for (int i = 0 ; i < str1.size(); ++i) {
			if (str1[i] == '1' && str2[i] == '0') {
				cout << '>';
				return 0;
			}
			if (str1[i] == '0' && str2[i] == '1') {
				cout << '<';
				return 0;
			}
		}
		cout << '=';
		return 0;
	}


	// long long int num1 = stoi(str1, 0, 2);
	// long long int num2 = stoi(str2, 0, 2);

	// cout << num1 << ' ' << num2 << endl;

	// if (num1 > num2) {
	// 	cout << '>';
	// }
	// else if (num1 < num2) {
	// 	cout << '<';
	// }
	// else {
	// 	cout << '=';
	// }

	// return 0;
}