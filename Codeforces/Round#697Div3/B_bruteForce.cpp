#include <bits/stdc++.h>

using namespace std;

bool canMake(int n){
    if(n<2020){
        return false;
    }
    if(n%2020 ==0 || n%2021 == 0){
        return true;
    }
    else{
        return canMake(n-2020) || canMake(n-2021);
    }
}

int solve(){
    int n;
    cin>>n;

    if(canMake(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
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