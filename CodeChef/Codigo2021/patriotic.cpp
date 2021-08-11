#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for(int i = 1; i<sqrt(n)+2;i++){
        cout<<i<<endl;
        if(n%i == 0){
            string binary = bitset<16>(i).to_string();
            cout<<binary<<endl;
            if(binary[binary.size()-k]=='1'){
                ans++;
            }
        }
    }

    string binary = bitset<16>(n).to_string();
    if(binary[binary.size()-k]=='1'){
        ans++;
    }
    cout<<ans<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;


    while(t--){
        solve();
    }
    return 0;
}