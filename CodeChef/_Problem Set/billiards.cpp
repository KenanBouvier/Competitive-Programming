#include <bits/stdc++.h>

using namespace std;
const int mod = 1000000009;
void solve(){
    int n; cin>>n;
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;
    for(int i =3; i<n+1;i++){
        dp[i] = dp[i-2]+dp[i-3];
    }
    cout<<dp[n]%mod<<"\n";
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        solve();
    }

    return 0;
}