#include <bits/stdc++.h>
using namespace std;


void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    if(y+z == x){
        cout<<"YES"<<"\n";
    }
    else if(x+y == z){
        cout<<"YES"<<"\n";
    }
    else if(x+z == y){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}