#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> v,ans;

    for(int i = 0; i<s.size();i++){
        v.push_back((int)s[i] - 48);
    }
    ans.push_back(1);
    int prev = ans[0]+v[0];

    for(int i = 1; i<v.size();i++){
        if(v[i] +1 == prev){
            ans.push_back(0);
            prev = v[i];
        }
        else{
            ans.push_back(1);
            prev = v[i]+1;
        }
    }

    for(int i = 0; i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; 
    cin>>t;
    while(t--){
    solve();
    }
    
    return 0;
}