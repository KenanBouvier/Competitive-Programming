#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m; cin>>n>>m;
    vector<int> v(n);

    for(int i = 0 ;i<n;i++){
        cin>>v[i];
    }
    int increase = 0;

    for(int i = 1 ;i<v.size();i++){
        increase+=v[i];
    }

    if(v[0]+increase>m){
        cout<<m<<"\n";
    }
    else{
        cout<<v[0]+increase<<"\n";
    }


}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }
    return 0;
}