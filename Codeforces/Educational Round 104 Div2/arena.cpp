#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i = 0 ; i<n; i++){
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int mins = 0;
    int curr = v[0];

    for(int i = 0; i< v.size();i++){
        if(curr != v[i]){
            break;
        }
        mins++;
    }
    cout<<v.size()-mins<<"\n";
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