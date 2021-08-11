#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v;
    unordered_map<int,int> m;
    int nt;
    for(int i = 0 ;i<n;++i){
        int a; cin>>a;
        v.push_back(a);
        m[a]++;
        if(m[a]>1){
            nt = a;
        }
    }
    for(int i = 0 ;i<n;++i){
        if(v[i]!=nt){
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<-1<<'\n';

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0 ;
}