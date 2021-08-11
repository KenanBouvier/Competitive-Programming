#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int guess,reply;
    int numGuesses = 0; 
    int base  = 1; 
    while(true){
        guess = pow(base,2);
        cout<<flush;
        cout<<guess<<endl;
        cin>>reply;
        if(reply == -1){
            break;
        }
        if(reply==1 || numGuesses>=2000){
            break;
        }
        numGuesses++;
        base++;
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}