#include <bits/stdc++.h>


using namespace std;

int solve(){
    int ans = 0;
    int n;
    char character;
    cin>>n;
    string c;

    cin>>c;
    

    for(int i = 1; i<n; i++){
        if(c[i-1]==c[i]){
            ans++;
        }
    }

    cout<<ans<<endl;

    return ans;
}


int main(){
    int T;

    cin>>T;

    while(T--){
        solve();
    }


    return 0 ;
}