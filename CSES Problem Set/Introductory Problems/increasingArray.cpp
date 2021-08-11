#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL);
using namespace std;


int main(){
    fastio
    long long n;
    cin>>n;
    vector<int>v(n);

    for(int i =0;i<n;i++){
        int a;
        cin>>a;
        v[i] = a; 
    }
    long long curr = v[0];
    long long  ans = 0;

    for(int i = 1; i<n; i++){
        if(v[i]<curr){
            ans+=abs(v[i]-curr);
        }
        else{
            curr = v[i];
        }
    }

   cout<<ans;

    return 0;
}