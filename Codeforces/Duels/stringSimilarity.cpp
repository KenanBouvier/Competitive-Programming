#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;

    string w = "";
    for(int i = 0;i<n;i++){
        w+=s[2*i];
    }

    cout<<w<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    int t;cin>>t;
    while(t--){
    solve();
    }
    

    return 0;
}