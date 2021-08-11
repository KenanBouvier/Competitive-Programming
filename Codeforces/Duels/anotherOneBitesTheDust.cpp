#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long a,b,c; cin>>a>>b>>c;
    long long ans = 0;

    ans+= c*2;

    ans+=min(a,b)*2;

    if(max(a,b)-min(a,b)>0){
        ans+=1;
    }

    cout<<ans;

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();

    return 0;
}