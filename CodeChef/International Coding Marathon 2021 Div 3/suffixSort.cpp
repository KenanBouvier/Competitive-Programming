#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);
    int mx = INT_MIN;
    int mn = INT_MAX;
    int mnPos;

    for(int i = 0 ;i<n;++i){
        cin>>v[i];
        if (v[i]>=mx){
            mx = v[i];
            mnPos = i+1;
            if(mnPos==n) mnPos = 0;
        }
        if(v[i]<mn){
            mn = v[i];
        }
    }

    if(n == 1){
        cout<<"YES\n";
        cout<<0<<"\n";
        return;
    }
    if(n==2){
        cout<<"YES\n";
        if(v[0]<=v[1]){
            cout<<0<<'\n';
        }
        else{
            cout<<1<<"\n";
        }
        return;
    }

    int i = mnPos;
    int prev= v[i];
    i++;
    if(i==n) i =0;

    while(i!=mnPos){
        int cur =v[i];
        if(cur<prev){
            cout<<"NO\n";
            return;
        }
        i++;
        if(i==n) i = 0;
        prev = cur;
    }

    cout<<"YES\n";
    if(mnPos == 0 || mn == mx){
        cout<<0<<"\n";
    }
    else{
        cout<<1<<"\n";
    }


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0 ;
}