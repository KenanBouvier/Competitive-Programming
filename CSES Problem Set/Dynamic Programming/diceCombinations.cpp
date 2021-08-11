#include <bits/stdc++.h>
using namespace std;


int solve(){
    int n;
    cin>>n;

    vector<int> dp(n+1,0);//final answer = dp[n]
    const int mod = 1000000007;
    dp[0] = 1;

    for(int i =1;i<n+1;i++){
        for(int dice = 1; dice<=6; dice++){
            if(dice>i){
                break;
            }
            dp[i] = (dp[i]+dp[i-dice])%mod;
        }
    }
    cout<<dp[n];
}

int main(){ 
    solve();
    return 0;
}