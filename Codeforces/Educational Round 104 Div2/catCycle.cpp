#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    int a = n;
    int b = 1;

    if(n%2 ==0){
        k %= (2*(n-1));
    }
    else{
        k %= (n*2);
    }

    // cout<<k<<endl;
    while(k>1){
        a--;
        b++;

        if(a<1){
            a = n;
        }
        if(b>n){
            b = 1;
        }

        if(a == b){
            b++;
        }

        if(b>n){
            b = 1;
        }
        k--;
    }

    cout<<b<<"\n";
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
