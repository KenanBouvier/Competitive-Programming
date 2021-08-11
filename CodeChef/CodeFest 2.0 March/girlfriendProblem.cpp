#include <bits/stdc++.h>
using namespace std;
int const MOD = 1000000007;

int stringSum(int n){
    string s = to_string(n);
    
    int sum = 1;

    for(int i = 0; i<s.size();i++){
        sum*= (((int)s[i] -48)%MOD);
    }
    return sum;
}

void solve(){
    int L,R; cin>>L>>R;

    int ans = 0;
    for(int i = L ; i<=R;i++){
        ans+=stringSum(i);
    }
    cout<<ans%MOD<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}