#include <bits/stdc++.h>
 
using namespace std;
 
 bool g_add = true;

pair<bool,int> depth(int q, int x){
    int d = q;
    int depth = 1;
    while(d%x ==0){
        d = d/x;
        depth++;
    }
    pair<bool,int> result (false, q*depth);
    return result;
}

int solve(vector<int> v,int x){
    int i = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i])
    }

    cout<<ans<<endl;
    return ans;
}

 
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int N, x,a;
        cin>>N;
        cin>>x;
 
        vector<int> v(N);
        for(int i = 0; i<N; i++){
            cin>>a;
            v[i]=a;
        }
 
        solve(v,x);
    }
    // int ans = 0;
    // pair<bool,int> result;
    // result= depth(4,2);
    // cout<<ans<<": ans"<<endl;
    // ans+=depth(6,2);
    // cout<<ans<<": ans"<<endl;
    // ans+=depth(8,2);
    // cout<<ans<<": ans"<<endl;
    // ans+=depth(2,2);
    // cout<<ans<<": ans"<<endl;

    cout<<ans;

    return 0;
}