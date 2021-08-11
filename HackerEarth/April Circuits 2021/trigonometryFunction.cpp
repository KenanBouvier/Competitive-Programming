#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    double  pi = acos(-1);
    double theta = 40.89339465;
    long long MOD = 10000000021;

    while(t--){
        unsigned long long int p,q;cin>>p>>q;
        double ans = 0.0;
        
        for(unsigned long long int x = p;x<=q;++x){
            double rad = theta*pi/180;
            double res = fmod((2.0* (fmod(pow(7.0,x/2.0),MOD))*cos(x*rad)+x*(fmod(pow(4.0,x),MOD))),MOD);
            cout<<res<<endl;
            ans+=res;
        }

        cout<<ans<<'\n';
    }

	return 0;
}