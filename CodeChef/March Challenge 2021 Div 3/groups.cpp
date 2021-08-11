#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    int ans = 0;
    bool newGroup = false;
    for(int i = 0; i<s.size();i++){
        if(newGroup){
            if(s[i]!='1'){
                ans++;
                newGroup = false;
            }
        }
        else{
           if(s[i]=='1') {
               newGroup =true;
           }
        }
    }
    if(newGroup){
        ans++;
    }

    cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;

    while(t--){
    solve();
    }

    
    return 0;
}