#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);

using namespace std;

int solve(){
    map<int, char> m;
    string s,a;
    string ans = "";
    cin>>s>>a;

    for(int i = 0 ; i<10;i++){
        m[i]=s[i];
    }

    for(int i =0; i<a.size();i++){
        if(isdigit(a.at(i))){
            ans+=m[(int)a[i]-48];
        }
        else{
            ans+=a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}

int main(){
    fastio
    solve();

    return 0;
}