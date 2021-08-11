#include <bits/stdc++.h>
using namespace std;

void solve(){
    int c;cin>>c;

    int val = 0;

    int i = 1;
    while(val<=c){
        val = pow(2,i);
        i++;
    }

    int ans = 0;
    for(int i = val-1;i>=0;i--){
        for(int j = i;j>=0;j--){
            int xorVal = (i^j);

            if(xorVal==c){
                if((i*j)>ans){
                    ans = i*j;
                }
            }
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