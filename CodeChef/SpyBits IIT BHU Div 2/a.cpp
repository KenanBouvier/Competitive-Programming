#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;

    while(t--){
        int H,x,y,C;
        cin>>H>>x>>y>>C;

        int waterNeed = (x+(y/2))*H;

        if(waterNeed<=C){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}