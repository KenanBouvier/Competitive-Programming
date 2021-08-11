#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        if(n==1){
            cout<<"NO\n";
        }
        else{
            double res = log2(n);

            if((int)res != res){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }

    return 0;
}