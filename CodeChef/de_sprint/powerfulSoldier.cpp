#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n; cin>>n;
    map<int,int> m;
    int mx = INT_MIN;
    int key = INT_MIN;
    for(int i = 0; i<n; i++){
        int a; cin>>a;
        m[a] ++;
        if(m[a]>mx){
            mx = a;
            key = a;
        }

    }

    cout<< key<<"\n";

}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();

    return 0;
}