#include <bits/stdc++.h>
using namespace std;

void solve(){
    int amin,bmin,cmin,tmin,a,b,c; cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
    if(a<amin || b<bmin || c<cmin || a+b+c<tmin){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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