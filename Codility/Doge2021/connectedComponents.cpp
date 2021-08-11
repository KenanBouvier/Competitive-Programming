#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N,M,Q; cin>>N>>M>>Q;
    vector<vector<int>> adj(N);
    for(int i = 0; i<M;++i){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}



int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        solve();
    }


    return 0;
}