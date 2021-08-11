#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    string bitVal = bitset<16>(n).to_string();
    cout<<bitVal;
    int ans = 0;
    for(int i = 0; i<bitVal.size();i++){
        if(bitVal[i] == '1'){
            ans++;
        }
    }

    if(ans%2 == 0){
        cout<<"Magical\n";
    }
    else{
        cout<<"Non-Magical\n";
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