#include <bits/stdc++.h>

using namespace std;

int solve(){
    string s;
    cin>>s;
    int ans = 0;

    for(int i = s.size()-1 ; i>=0; i--){
        for(int j = 0; j<s.size(); j++){
            if(s[i]!=s[j]){
                if(i-j >ans){
                    ans = i-j;
                }
            }
        }
    }

    cout<<ans<<endl;
}

int main(){
    solve();
}