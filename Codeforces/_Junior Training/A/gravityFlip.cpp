#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin>>n;
    int mx = INT_MIN;
    unordered_map<int,int> m;
    vector<int> v(n);
    for(int i = 0 ;i<n;++i){
        cin>>v[i];
        if(v[i]>mx){
            mx = v[i];
        }
        for(int j = v[i];j>=1;--j){
            m[j]++;
        }
    }

    vector<int> ans;

    for(int i = 0 ;i<n;++i){
        int num = 0;
        for(auto p : m){
            if(p.second>0){
                num++;
                m[p.first]--;
            }
        }
        ans.push_back(num);
    }

    for(int i = n-1; i>=0;--i){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';

    return 0;
}