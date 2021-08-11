#include <bits/stdc++.h>
using namespace std;


void solve(){
    long long a,y,x; cin>>a>>y>>x;
     if(a>=y){
         cout<<y*x<<'\n';
     }
     else{
          cout<<(1+a*x)<<'\n';
     }
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
     while(T--){
         solve();
     }

     return 0;
}