#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> boys(n);
        vector<int> girls(n);

        for(int i = 0;i<n;++i){
            cin>>boys[i];
        }
        for(int i = 0 ;i<n; ++i){
            cin>>girls[i];
        }
        sort(boys.begin(),boys.end());
        sort(girls.rbegin(),girls.rend());

        int ans = 0;
        for(int i = 0;i<n;++i){
            if(boys[i]+girls[i]>ans){
                ans = boys[i]+girls[i];
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}