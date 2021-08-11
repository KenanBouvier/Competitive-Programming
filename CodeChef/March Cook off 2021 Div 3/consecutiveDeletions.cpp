#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    /* 
    AIM:
        Make all elements 0 
        Minimum total cost

    OPERATION:
        1)  Subarray [L,R]      R-L+1 = K
        2)  Change one element to 0
        3)  Cost = Sum(Subarray)
    */

    vector<int> v(n);
    int ones = 0;
    for(int i = 0;i<n;i++){
        cin>>v[i];
        if(v[i]==1){
            ones++;
        }
    }

   int mn = accumulate(v.begin(),v.begin()+k,0);

    int sum = mn;
   for(int i = k; i<v.size();i++){
       sum-=v[i-k];
       sum+=v[i];
       if(sum<mn){
           mn = sum;
       }
   }
   int ans = ones-mn;
   for(int i = mn;i>=1;i--){
       ans+=i;
   }
   cout<<ans<<"\n";

}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}