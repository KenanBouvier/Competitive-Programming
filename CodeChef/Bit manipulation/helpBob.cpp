#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i =0 ;i<n; i++){
        int a;
        cin>>a;
        v.push_back(1^a);
        cout<<(1^a)<<endl;
    }


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