#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n;i++){
        int a; cin>>a;
        v[i] = a;
    }

    sort(v.begin(),v.end());
    int diff = 0;
    bool win = true;
    bool exceed = false;
    for(int i = 1; i<=n;i++){
        if(v[i-1]>i){
            exceed = true; 
            break;
        }
        else{
            diff+= i-v[i-1];
            win = false;
        }
    }

    if(exceed){
        cout<<"Second"<<"\n";
    }
    else{
        if(diff%2 ==0){
            cout<<"Second"<<"\n";
        }
        else{
            cout<<"First"<<"\n";
        }
    }
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;

    while(t--){
        solve();
    }

    return 0;
}