#include <bits/stdc++.h>

using namespace std;

void solve(){
    int p,n;cin>>p>>n;
    vector<int>v(n);
    set<int> s;
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        if(s.find(v[i]%p)!=s.end()){
            cout<<i+1<<'\n';
            return;
        }
        else{
            s.insert(v[i]%p);
        }
    }
    cout<<-1<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}