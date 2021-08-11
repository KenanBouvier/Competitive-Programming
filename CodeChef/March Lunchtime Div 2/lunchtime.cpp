#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0 ;i<n;i++){
        cin>>v[i];
    }
    vector<int> visible(n);
    for(int i = 0 ;i<n;i++){
        int origin = v[i];
        for(int j = i+1; j<n;j++){
            if(v[j]>origin){
                break;
            }
            if(v[j]==origin){
                visible[i]++;
                visible[j]++;
            }
        }
    }
    for(int i = 0;i<n;i++){
        cout<<visible[i]<<" ";
    }
    cout<<"\n";


}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
     while(T--){
         solve();
     }

     return 0;
}