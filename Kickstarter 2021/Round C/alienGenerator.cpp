#include <bits/stdc++.h>
using namespace std;


void solve(int caseNum) {
    long long g; cin >> g;
    long long ans = 1;
    //diff = 1

    for (long long k = 1 ; k < g; ++k) {

        //Sn = n/2 (2*first + (n-1))
        //Sn = g
        //first = k

        //if n is a positive integer then satisfies

        // n^2 +n(2k-1) - 2g = 0

        double discriminant = (2 * k - 1) * (2 * k - 1) - 4 * (-2 * g);
        double root1 = 0;
        double root2 = 0;

        if (discriminant > 0 ) {
            root1 = ((-2 * k + 1) + sqrt(discriminant)) / 2;
            root2 = ((-2 * k + 1) - sqrt(discriminant)) / 2;

            if (root1 > 0) {
                if (root1 == (long long)root1) {
                    ans++;
                    continue;
                }
            }

            if (root2 > 0) {
                if (root2 == (long long)root2) {
                    ans++;
                }
            }

        }
        else if (discriminant == 0) {
            root1 = (-2 * k + 1) / 2;

            if (root1 > 0) {
                if (root1 == (long long)root1) {
                    ans++;
                }
            }
        }
        else {
            //complex
        }

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