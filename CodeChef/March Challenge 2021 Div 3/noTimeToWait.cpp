#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,h,x; cin>>n>>h>>x;

    int mx = 0;

    for(int i = 0; i<n;i++){
        int a; cin>>a;
        if(a>mx){
            mx = a;
        }
    }

    if(x+mx>=h){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();

    
    return 0;
}