#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    vector<int> v(n); 
    for(int i = 0 ;i<n;++i) cin>>v[i];
    int ans = 1;

    for(int i = 1;i<n;++i){
        if(v[i-1]<v[i] && v[i+1]<v[i]){
            v[i]  = max(v[i-1],v[i+1])+1;
        }
    }

    // for(int x : v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    for(int i = 1 ;i<n;++i){
        ans+=max(v[i]-v[i-1],0);
    }
    cout<<ans<<"\n";

	return 0;
}