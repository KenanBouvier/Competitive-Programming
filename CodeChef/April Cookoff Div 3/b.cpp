#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,r; cin>>n>>r;
    vector<int > times(n);
    vector<int > tensions(n);
    for(int i = 0 ;i<n;++i){
        cin>>times[i];
    }
    for(int i = 0;i<n;++i){
        cin>>tensions[i];
    }

    long long mx = 0;
    long long x = 0;
    
    for(int i = 0;i<n;++i){
        x+=tensions[i];
        mx = max(mx,x);

        if(i < n-1){
            int restInterval =times[i+1]-times[i];
            x -= restInterval*r;
            x = max(x,0ll);
        }

    }
    cout<<mx<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}