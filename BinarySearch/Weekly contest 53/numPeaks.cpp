#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int>ans;

    vector<int> v = {1,2,3,2,4};
    int prev = v[0];
    if(v[0]>v[1]){
        ans.push_back(0);
    }
    for(int i = 1 ; i<v.size()-1;i++){
        if(v[i]>prev && v[i]>v[i+1]){
            ans.push_back(i);
        }
    }

    if(v[v.size()-1]>v[v.size()-2]){
        ans.push_back(v.size()-1);
    }
    for(int n :ans){
        cout<<n<<" ";
    }

    return 0;
}