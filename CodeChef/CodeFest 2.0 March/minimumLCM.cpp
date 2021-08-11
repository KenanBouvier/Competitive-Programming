#include <bits/stdc++.h>
using namespace std;
int const MOD = 1000000007;

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
    int ans = INT_MAX;
    pair<int,int> vals = {-1,-1};
    for(int i = l; i<=r;i++){
        for(int j = l; j<=r;j++){
            int LCM = lcm(i,j);
            int calc = i*j/LCM;
            if(calc < ans){
                ans = calc;
                vals.first = i;
                vals.second = j;
            }
            else if(calc == ans){
                if((i+j) < (vals.first+vals.second)){
                    vals.first = i;
                    vals.second = j;
                }
            }
        }
    }
    cout<<vals.first<<" "<<vals.second<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}