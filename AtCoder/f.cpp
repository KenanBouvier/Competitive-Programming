#include <bits/stdc++.h>
using namespace std;

int fact(int i){
	if (i <= 1) return 1;
  	else return i*fact(i-1);
}

void solve(){
    unsigned long long int n; cin>>n;
    int const MOD = 998244353;

    long long int ans = (fact(n+5))/(fact(n) * 120);

    cout<<ans%MOD;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0 ;
}