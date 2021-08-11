#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,x; cin>>n>>x;

    int maxRating = INT_MIN;
    for(int i = 0; i<n;i++){
        int a,b;cin>>a>>b;
        if(b>maxRating && a<=x){
            maxRating = b;
        }
    }
    cout<<maxRating<<"\n";

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
     while(T--){
         solve();
     }

     return 0;
}