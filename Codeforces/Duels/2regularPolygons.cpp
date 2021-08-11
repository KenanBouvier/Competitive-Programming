#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m; cin>>n>>m;

    if(m>n){
        cout<<"NO\n";
    }
    else{
        if(n%m ==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0 ;
}