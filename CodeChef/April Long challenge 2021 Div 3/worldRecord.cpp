#include <bits/stdc++.h>
using namespace std;

float roundFloat(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    unordered_map<int,int> m;

    while(t--){
        float k1,k2,k3,v;cin>>k1>>k2>>k3>>v;
        float res = k1*k2*k3*v;
        res = 100/res ;
        res = roundFloat(res);
        string s = to_string(res);
        if(s == "9.580000" || res>9.58){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

    return 0 ;
}