#include <bits/stdc++.h>
using namespace std;


int check(vector<int> v){
    int res = v[0];
    for(int i =1; i<v.size();++i){
        res = (res|v[i]);
    }
    cout<<res<<'\n';
    return res;
}

int main(){

    vector<int> v ={1,2,3};
    int ans = check(v);
    // v[0] = 4;  //   1 becomes 4
    // check(v);
    ans |= v[0];
    ans |= 4;
    cout<<ans<<'\n';

    ans|= v[2];
    ans|= 0; 
    // v[2] = 0;  //   3 becomes 0
    cout<<ans<<'\n';
    // check(v);


    return 0;
}