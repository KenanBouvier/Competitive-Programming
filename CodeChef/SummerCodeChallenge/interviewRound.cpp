#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        unordered_map<char, int> m;

        for (int i = 0; i < s.size(); ++i) {
            m[s[i]]++;
            if ((i == 0 || i == s.size() - 1) && s[i] == 'E') {
                m[s[i]]--;
            }
        }

        if (m['E'] > 0 && m['e'] > 0 && m['C'] > 0 && m['o'] > 0 && m['D'] > 0) {
            cout << "SELECTED\n";
        }
        else {
            cout << "REJECTED\n";
        }

    }
    return 0;
}