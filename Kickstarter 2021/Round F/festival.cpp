#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum) {
    int d, n, k; cin >> d >> n >> k;  // d days,  n attractions,  k per day

    vector<pair<int, pair<int, int>>> vec; //  (happiness,<start,end>)

    for (int i = 0 ; i < n; ++i) {
        int h, s, e; cin >> h >> s >> e;
        vec.push_back({h, {s, e}});
    }

    // for (auto pr : vec) {
    //     int h = pr.first;
    //     auto p = pr.second;
    //     cout << h << ": " << p.first << " " << p.second << '\n';
    // }

    vector<vector<int>> allDays;

    for (int day = 1; day <= d; ++day) {
        vector<int> v;
        for (auto pr : vec) {
            int h = pr.first;
            auto p = pr.second;
            if (day >= p.first && day <= p.second) {
                v.push_back(h);
            }
        }
        if (v.size() > 0) {
            allDays.push_back(v);
        }
    }


//sort all

    for (int i = 0; i < allDays.size(); ++i) {
        sort(allDays[i].begin(), allDays[i].end(), greater<int>());
    }

    // cout << "\n";
    // for (vector<int> vect : allDays) {
    //     for (int x : vect) {
    //         cout << x << " ";
    //     }
    //     cout << "\n";
    // }

    int ans = 0;
    for (auto vec : allDays) {
        int mx = 0;
        int ub = vec.size();
        if (k < ub) {
            ub = k;
        }
        for (int i = 0; i < ub; ++i) {
            mx += vec[i];
        }
        ans = max(ans, mx);
    }


    cout << "Case #" << caseNum << ": " << ans << '\n';
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    int caseNum = 1;
    while (t--) {
        solve(caseNum);
        caseNum++;
    }
    return 0;
}