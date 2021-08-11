#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> ans;
    int mod = 10;

    while(n> mod/10){
        ans.push_back(n/mod - n%(mod/10));
        mod*=10;
    }
    cout<<ans.size()<<"\n";
    for(int n : ans){
        cout<<n<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0 ;
}