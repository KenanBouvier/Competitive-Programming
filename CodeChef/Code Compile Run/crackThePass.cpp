#include <bits/stdc++.h>

using namespace std;

int loop(int n, vector<int> v){
    if(v.size() == n){
        string s;
        for(int e : v){
            s+= to_string(e);
        }
        int val = stoi(s);
        cout<<val<<"\n";
        return 0;
    }

    for(int i= 1; i<=9;i++){
        vector<int> v2 = v;
        v2.push_back(i);
        loop(n,v2);
    }

}

void solve(){
    int n;
    cin>>n;
    loop(n,{});

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