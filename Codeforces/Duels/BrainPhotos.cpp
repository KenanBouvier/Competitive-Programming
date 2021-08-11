#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;cin>>n>>m;

    vector<vector<int>> v;

    for(int i = 0; i<n;i++){
        for(int j = 0;j<m;j++){
            char a; cin>>a;
            if(a=='C'||a=='M'||a=='Y'){
                cout<<"#Color"<<"\n";
                return;
            }
        }
    }
    cout<<"#Black&White"<<"\n";

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);


    solve();
    

    return 0;
}