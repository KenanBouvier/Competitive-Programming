#include <bits/stdc++.h>
using namespace std;

void solve(){
    int R,X,Y; cin>>R>>X>>Y;
     
    double distance = sqrt(X*X + Y*Y);

    int ans = distance/R;
    if(ans*R<distance){
        ans++;
    }
    cout<<ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0 ;
}