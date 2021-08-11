#include <bits/stdc++.h>
using namespace std;

int gcdOp(int a, int b){
    if(b==0) return a;
    return gcdOp(b,a%b);
}
void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    int aVal = 1;
    int bVal = 1;

    for(int i = 0; i<a-1;++i)aVal*=10;
    for(int i = 0;i<b-1;++i)bVal*=10;

    for(int i = aVal; i<aVal*10;++i){
        for(int j = bVal; j<bVal*10;++j){
            int res = gcdOp(i,j);
            if(to_string(res).size()==c){
                cout<<i<<" "<<j<<'\n';
                return;
            }
        }
    }
    
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T; cin>>T;
    while(T--){
        solve();
    }
    return 0 ;
}