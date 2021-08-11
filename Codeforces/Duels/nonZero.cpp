#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int ans = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int a;cin>>a;
        sum+=a;
        if(a==0){
            ans++;
            sum++;
        }
    }
    if(sum==0){
        ans++;
    }
    cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    int t;cin>>t;
    while(t--){
    solve();
    }
    

    return 0;
}