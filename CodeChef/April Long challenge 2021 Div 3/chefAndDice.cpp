#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long n; cin>>n;

        long long ans = 0;
        if(n>=4){
            ans+= ((n/4))*(44); // all the layers of 4 dice definitely seen. i.e not top or bottom
            n%=4;
            if(n==1){
                ans+=14; 
                ans+=12; // 3 from below
                ans+=6; // 1 top layer    
            }
            else if(n==2){
                ans+=24;
                ans+=8; // 2 from below
                ans+=12; // 2 top layer
            }
            else if(n==3){
                ans+=33;
                ans+=4; // 1 from below
                ans+=18; // 3 top layer
            }
            else{
                ans+=16;
            }
        }
        else{
            if(n==1){
                ans+=20;
            }
            else if(n==2){
                ans+=36;
            }
            else if(n==3){
                ans+=51; 
            }
        }
        cout<<ans<<"\n";
    }

    return 0 ;
}