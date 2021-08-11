#include <bits/stdc++.h>
using namespace std;


void solve(){
   long long x, r, m;
        cin >> x >> r >> m;

        r = r * 60;
        m = m * 60;

        if (m < r)
            cout << "NO" << endl;
        else
        {

            r -= x;
            m -= x;

            if (r <= (m+1) / 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
     while(T--){
         solve();
     }

     return 0;
}