#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;

    return gcd(b, a % b);
}

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (int i = 0 ; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 1; i < n; ++i) {
        v[i] = (v[i - 1] * v[i]) / gcd(v[i - 1], v[i]);
    }

    cout << k / v[n - 1] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
