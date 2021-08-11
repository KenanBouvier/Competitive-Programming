#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int ans = 0;
    for(int a = 1; a<n+1; a++){
        for(int b = 1; b<n+1; b++){
            double c = b*b - a;
            if(floor(c)-c == 0 && a*a-b == sqrt(a*a+b*b)){
                ans++;
            }
        }
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
