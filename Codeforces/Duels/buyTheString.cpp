#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,c0,c1,h; cin>>n>>c0>>c1>>h;

    string s;
    cin>>s;
    int ans = 0;
    int mn = min(c0,c1);
    int mx = max(c0,c1);
    vector<int> v;

    for(int i = 0; i<n;i++){
        if(s[i]=='0'){
            v.push_back(c0);
        }
        else{
            v.push_back(c1);
        }
    }
    int swap = h+ mn;
    for(int i = 0;i<v.size();i++){
        if(v[i]!=mn){
            if(swap < mx){
                ans+=swap;
            }
            else{
                ans+=mx;
            }
        }
        else{
            ans+=mn;
        }
    }

    cout<<ans<<"\n";

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }

    return 0;
}