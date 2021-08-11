#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;

    // score on Mth ball
    //  N%M <= N/2

    //N = 10
    // 10%M <=5
    // 4
    // int ans = 0;
    // for(int i = n;i>=1;--i){
    //     if(n%i <=n/2){
    //         ans++;
    //         cout<<i<<" "<<n%i<<endl;
    //     }
    // }
    cout<<n<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0 ;
}