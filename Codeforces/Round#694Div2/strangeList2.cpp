#include <bits/stdc++.h>
 
using namespace std;
 
int solve(vector<int> v,int x){
    int ans;
    int i = 0;
    int q = v[0];
 
    while(q%x == 0){
        for(int j = 0; j<x; j++){
            v.push_back(q/x);
        }
 
        i++;
        q=v[i];
    }
 
    ans = accumulate(v.begin(),v.end(),0);
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
 
    return 0;
}