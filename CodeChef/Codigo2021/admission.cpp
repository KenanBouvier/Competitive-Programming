#include <bits/stdc++.h>
using namespace std;


void solve(){
    int r,n;
    cin>>r>>n;
    vector<int> scores(n);

    for(int i = 0; i<n;i++){
        cin>>scores[i];
    }
    int ans = 0;
    for(int i = 0; i<n-1;i++){
        if(scores[i]>=r){
            ans=i+1;
            break;
        }
    }
    cout<<ans<<"\n";

}


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        solve();
    }


    return 0;
}