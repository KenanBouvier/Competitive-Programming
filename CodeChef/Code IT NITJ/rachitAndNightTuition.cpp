#include <bits/stdc++.h>

using namespace std;

int solve(){
    int a,b,c,r;
    cin>>a>>b>>c>>r;
    int distance = abs(b-a);
    int light = 0;
    pair<int,int> cover = {c-r,c+r};

    if(b<a){
        swap(a,b);
    }

    if(cover.first<=a && cover.second>=b){
        cout<<0<<" ";
        return 0;
    }
    
    for(int i = a+1; i<b+1; i++){
        if(i>cover.first && i<=cover.second){
            light++;
        }
    }
    cout<<distance-light<<" ";
    return 0;
}

int main(){
    int T;
    cin>>T;

    while(T--){
        solve();
    }
}