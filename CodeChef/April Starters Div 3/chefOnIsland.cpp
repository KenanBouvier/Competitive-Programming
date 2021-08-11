#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;

    while(t--){
         int x,y,xr,yr,d; cin>>x>>y>>xr>>yr>>d;

        int foodDays = x/xr;
        int waterDays = y/yr;

        int days  = min(foodDays,waterDays);

        if(days>=d){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }



    }


	return 0;
}