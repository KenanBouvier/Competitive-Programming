#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        set<int> fieldsUsed;

        for(int i =0 ;i<n;i++){
            int a;cin>>a;
            fieldsUsed.insert(a);
        }
        if(fieldsUsed.size()<m){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }

    }


    return 0 ;
}