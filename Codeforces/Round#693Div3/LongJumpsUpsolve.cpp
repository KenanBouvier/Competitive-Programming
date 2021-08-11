#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> dp(n);
    for(int i = 0; i <n ; i++){
        int x;
        cin>>x;
        a[i] = x;
    }

    for(int i = n-1; i>=0; i--){
        dp[i] = a[i];

        int j = i+ a[i];

        if(j<n){
            dp[i] += dp[j];
        }
        
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;;

}



int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}