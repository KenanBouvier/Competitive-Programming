#include <bits/stdc++.h>

using namespace std;

void solve(){

    int d,c; cin>>d>>c;

    int sumA = 0;
    int sumB = 0;

    for(int i = 0; i<3; i++){
        int a;cin>>a;
        sumA+=a;
    }
    for(int i = 0; i<3;i++){
        int a; cin>>a;
        sumB+=a;
    }
    bool coupon = false;
    int without = sumA+sumB+2*d;
    int with = sumA+sumB+2*d;

    if(sumA>=150){
        with-=d;
        coupon = true;
    }
    if(sumB>=150){
        with -=d;
        coupon = true;
    }
    
    if(coupon){
        with+=c;
    }
    if(without<=with){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    
    }

    return 0;
}