#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    int m;
    cin>>s>>m;
    int const MOD = 1000000007;

    while(m--){
        string res = "";

        for(int i = 0;i<s.size();++i){
            res+= (to_string((s[i]-'0')+1));
        }
        s = res;
    }
    cout<<s.size()%MOD<<"\n";
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }
    return 0 ;
}