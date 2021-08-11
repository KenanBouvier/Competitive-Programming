#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k; cin>>n>>k; //locations and server #

        if(n%k==0) {
            cout<<n/k<<" "<<k<<'\n';
        }
        else{
            cout<<n/k+1<<" "<<n%k<<'\n';
        }
    }


    return 0 ;
}