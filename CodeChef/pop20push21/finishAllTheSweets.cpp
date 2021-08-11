#include <bits/stdc++.h>

using namespace std;

int solve(){
    map<int,int> m;
    int N,a;
    int ans = 0;
    cin>>N;


    for(int i = 0; i<N; i++){
        cin>>a;
        m[a]++;
    }


    for(pair<int,int> p : m){
        if(p.second%2 !=0){
            p.second--;
            ans++;
        }
        if(p.second%2 ==0 && p.second !=0){
            ans+= p.second/2;
        }
    }

    cout<<ans;
}

int main(){
    solve();
}