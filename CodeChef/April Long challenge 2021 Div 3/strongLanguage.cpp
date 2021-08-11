#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s; cin>>s;

        int count =  0;
        bool strong = false;
        for(int i = 0 ;i<n;++i){
            if(count==k){
                strong = true;
                break;
            }
            if(s[i]=='*'){
                count++;
            }
            else{
                count = 0;
            }
        }
        if(count==k){
            strong = true;
        }
        
        if(strong){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }


    return 0 ;
}