#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x ;cin>>n>>x;
    unordered_map<int,int> m;
    int ans= 0;
    for(int i = 0;i<n;++i){
        int a; cin>>a;
        m[a]++;
    }

    int duplicates = 0;
    int uniques = m.size();

    for(auto p :m){
        if(p.second>1){
            duplicates+= p.second-1;
        }
    }
    // 1: 4 //3 dupl
    // 2 :1
    // 3 : 6 //5 dupl

    // duplicates = 8
    // uniques = 3

    if(duplicates>=x){
        cout<<uniques<<'\n';
    }
    else{ //duplicates < need to give
        int restNeed = x-duplicates;
        cout<<uniques-restNeed<<'\n';
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