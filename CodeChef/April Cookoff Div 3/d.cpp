#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q; cin>>n>>q;
    vector<int> v(n);

    for(int i =0 ;i<n;++i){
        cin>>v[i];
    }
    int res = v[0];

    for(int i =1; i<n;++i){
        res = (res|v[i]);
    }
    cout<<res<<'\n';

    while(q--){
        int x,val; cin>>x>>val;
        v[x-1] = val;

        res = v[0];
        for(int i = 1; i<n;++i){
            res = (res|v[i]);
        }
        cout<<res<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}