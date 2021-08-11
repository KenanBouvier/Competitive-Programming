#include <bits/stdc++.h>

using namespace std;

void solve(){
    double a,b,x,y; cin>>a>>b>>x>>y;

    int ans = 0;
    for(int h = 1;h<=b;h++){
        double width = (h*x)/y;
        int w = width;

        if(width<=a && width == w){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();
    
    

    return 0;
}