#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int one = pow(2,n);
    int two = 0;

    int twoCount = 0;

    for(int i =n-1;i>=1;i--){
        int val = pow(2,i);
        if(two<one && twoCount<n/2){
            two+=val;
            twoCount++;
        }
        else{
            one+=val;
        }
    }

    cout<<abs(one-two)<<"\n";

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }
    
    return 0;
}