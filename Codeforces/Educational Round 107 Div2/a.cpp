#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int upvotes = 0;

    for(int i = 0 ;i<n;++i){
        int a; cin>>a;
        if(a==3 || a==1){
            upvotes++;
        }
    }
    cout<<upvotes<<'\n';
    
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T; cin>>T;
    while(T--){
        solve();
    }
    return 0 ;
}