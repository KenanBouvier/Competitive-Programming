#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL);
using namespace std;


int main(){
    fastio
    long n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n-1;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(v[0]!=1){
        cout<<1;
        return 0;
    }
    if(v.size()==1){
        cout<<2;
        return 0;
    }

    if(v.back()!=n){
        cout<<n;
        return 0;
    }

    for(int i = 0; i<n-1 ;i++){
        if(v[i+1]-1 !=v[i]){
            cout<<v[i+1]-1;
            return 0;
        }
    }
    return 0;
}