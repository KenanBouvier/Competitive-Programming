#include <bits/stdc++.h>

using namespace std;

void solve(){
    int k2,k3,k5,k6; cin>>k2>>k3>>k5>>k6;
    int ans = 0;
    while(true){
        if(k2>=1 && k5>=1 && k6>=1){
            ans+=256;
            k2--;
            k5--;
            k6--;
        }
        else if(k2>=1 && k3>=1){
            ans+=32;
            k2--;
            k3--;
        }
        else{
            break;
        }
    }
    cout<<ans<<"\n";


}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}