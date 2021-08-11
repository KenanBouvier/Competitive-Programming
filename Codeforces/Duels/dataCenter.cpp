#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n; 
    
    int ans = INT_MAX;
    for(int i = 1;i<=n;i++){
        int j = n/i;
        if(i*j == n){
            int perimeter =2*i+2*j; 
            if(perimeter<ans){
                ans = perimeter;
            }
        }

    }
    cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();
    
    return 0;
}