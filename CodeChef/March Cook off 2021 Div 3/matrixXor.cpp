#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n,m,k; cin>>n>>m>>k;

    int lower = k+2;

    int upper = k+m+n;

    int ans = lower;
    if(n%2 ==0){
        cout<<(lower^upper)<<"\n";
    }
    else{
        for(int i = lower+1; i<upper;i++){
            ans = (ans^i);
        }
        cout<<ans<<"\n";
    }

}



int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}