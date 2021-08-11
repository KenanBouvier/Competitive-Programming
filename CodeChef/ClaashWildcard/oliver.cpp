#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    int days = 2;
    int ans = 1;
    int currArrow =2;
    int count = 0;

    while(days<=n){
        if(count==currArrow){
            currArrow++;
            ans+=currArrow;
            count = 1;
        }
        else{
            ans+=currArrow;
            count++;

        }
        days++;
    }
    
    cout<<ans<<"\n";
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