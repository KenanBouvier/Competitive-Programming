#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


void solve(){
    int N,K,P;
    cin>>N>>K>>P;
    vector<vector<int> > stacks(N,vector<int>(K));
    int a;
    for(int i = 0; i<N;i++){
        for(int j = 0; j<K;j++){
            cin>>a;     
            stacks[i][j] = a;
        }
    } 
    //initialized in a 2d matrix 
    // e.g.
    10 10 100 30
    80 50 10 50

    

}

int main(){
    fastio
    int T;
    cin>>T;

    while(T--){
        solve();
    }

    return 0;
}