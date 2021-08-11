#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,q; cin>>n>>q;
    vector<bool> v(n);
    int ones = 0;

    for(int i = 0 ;i<n;i++){
        int a;cin>>a;
        if(a==1){
            ones++;
        }
        v[i] = a;
    }

    while(q--){
        int t,x; cin>>t>>x;

        if(t==1){
            if(v[x-1]==0){
                ones++;
            }
            else{
                ones--;
            }
            v[x-1] = !v[x-1];
        }
        else{
            for(int i = 0; i<v.size();i++){
                if(i<ones){
                    v[i] = 1;
                }
                else{
                    v[i] = 0 ;
                }
            }
            cout<<v[x-1]<<"\n";
        }
    }

}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
    

    return 0;
}