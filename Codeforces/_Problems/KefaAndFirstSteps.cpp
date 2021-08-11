#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long a;
    vector<long long > v(n);
    for(long long i = 0; i<n; i++){
       cin>>a; 
       v[i] = a;
    }
    long long localMax = 0;
    long long globalMax = 0;
    long long curr= v[0];
    for(long long i = 0 ; i<n; i++){
        if(v[i]>=curr){
            localMax++;
        }
        else{
            if(localMax>globalMax){
                globalMax = localMax;
                localMax = 1;
            }
        }
        curr= v[i];
    }
    cout<<max(localMax,globalMax)<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();


    return 0;
}