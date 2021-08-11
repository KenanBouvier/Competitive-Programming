#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;


int solve(){
    int N;
    cin>>N;
    map<string,pair<int,int> > m;
    //pair < #false, #true>
    for(int i = 0; i<N ; i++){
        string w;
        int b;
        cin>>w>>b;
        if(b == 1){
            m[w].second ++;
        }
        else{
            m[w].first++;
        }
    }
    int ans =0;
    for(pair<string,pair<int,int> > p : m){
        if(p.second.first>p.second.second){
            ans+=p.second.first;
        }
        else{
            ans+=p.second.second;
        }
    }

    cout<<ans<<endl;


}


int main(){
    fastio
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}