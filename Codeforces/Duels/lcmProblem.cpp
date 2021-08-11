#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
  // Function to return LCM of two numbers  
  int lcm(int a, int b)  
  {  
     return (a*b)/gcd(a, b);  
  }  


void solve(){
    int l,r; cin>>l>>r;

    cout<<lcm(l,r)<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }
    return 0;
}