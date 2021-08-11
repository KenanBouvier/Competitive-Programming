#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
    }
    else{
    cout<<(1^n)<<"\n";
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