#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t;cin>>n>>t;

    vector<int> v(n);
    
    for(int i = 0 ;i<n;i++){
        cin>>v[i];
    }

    int mn = *min_element(v.begin(),v.end());
    int index = 0;
    int ans = 0;

    while(t>=mn){
        if(v[index]<=t){
            t-=v[index];
            ans++;
        }
        
        index++;
        if(index>=n){
            index = 0;
        }
    }
    cout<<ans<<"\n";

    return 0 ;
}