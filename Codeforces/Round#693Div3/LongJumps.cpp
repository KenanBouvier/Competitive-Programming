#include <bits/stdc++.h>
 
using namespace std;
 
 
int loopJumps(int i, vector<int> v){
    // cout<<v[i]<<endl;
    if(i+v[i-1]>v.size()){
        return v[i-1];
    }
    else{
        return v[i-1] + loopJumps(i+v[i-1],v);
    }
}
 
int longJump(vector<int> v){
    int ans = 0;
    for(int i = 1; i<v.size()+1; i++){
        int score = loopJumps(i,v);
        if(score>ans){
            ans = score;
        }
 
    }
    cout<<ans<<endl;;
 
    return ans;
}
 
int main(){
    int T;
    cin>>T;
 
    while(T--){
        int n,a;
        vector<int> v;
        cin>>n;
 
        for(int i = 0; i < n; i++){
            cin>>a;
            v.push_back(a);
        }
        longJump(v);
    }
    return 0;
}