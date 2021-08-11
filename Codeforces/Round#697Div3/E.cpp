#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n,k;
    cin>>n>>k;
    int mod = pow(10,9)+7;
    set<int> s;
   for(int i = 0; i<n;i++) {
       int a;
       cin>>a;
       s.insert(a); 
   }
    int bloggers = 0;
    int ans = 0;
   for(auto it = s.rbegin();it!=s.rend();it++){
       if(k-1<0){
           cout<<(mod%ans) <<endl;
           return 0;
       }
       ans+= *it;
       k--;
   }
   cout<<(mod%ans)<<endl;
   return 0;
}


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        solve();
    }


    return 0;
}