#include <bits/stdc++.h>

using namespace std;

void solve(){
    map<int,int> logs;
    int ans = 0;
    int n,l;
    cin>>n;

    for(int i = 0; i<n; i++){
        cin>>l;
        logs[l]++;
    }

    for(pair<int,int> p : logs){
        if(p.second %2 !=0){
            p.second--;
        }
        if(p.second>0){
            p.second /=2;
            ans+=p.second;
        }
        
    }
    
    if(ans%2 !=0){
        cout<<(ans-1)/2<<" ";
    }
    else{
        cout<<ans/2<<" ";
    }

}




int main(){
    int T;
    cin>>T;

    while(T--){
        solve();
    }
    return 0;
}