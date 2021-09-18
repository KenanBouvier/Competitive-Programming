#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    set<int> st;

    for (int i = 0 ; i < s.size(); ++i) {
        if (s[i] == '1') {
            st.insert(i + 1);
        }
    }

    for (int i = 1; i <= s.size(); ++i) {
        auto it = lower_bound(st.begin(), st.end(), i);
        int above = *it;
        if (above == i)continue;
        if (it == st.begin()) {
            ans += (abs(above - i));
        }
        else {
            it--;
            int below = *it;
            ans += min(abs(above - i), abs(i - below));
        }
    }


    cout << "Case #" << caseNum << ": " << ans << '\n';
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v = {1, 2, 4, 2, 1, 1, 11, 2341};

    sort(v.begin(), v.end(), greater<int>());
    for (int x : v) {
        x = 10;
    }

    for (int x : v) {
        cout << x << "\n";
    }

    // int t; cin >> t;
    // int caseNum = 1;
    // while (t--) {
    //     solve(caseNum);
    //     caseNum++;
    // }
    return 0;
}