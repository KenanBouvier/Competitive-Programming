#include <bits/stdc++.h>
using namespace std;

void solve(){
    int w1,w2,x1,x2,m; cin>>w1>>w2>>x1>>x2>>m;
    int lower = w1;
    int upper = w1;

    for(int i =0;i<m;i++){
        lower +=x1;
        upper+=x2;
    }
    if(w2>=lower && w2<=upper){
        cout<<1<<"\n";
    }
    else{
        cout<<0<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
   
    return 0;
}