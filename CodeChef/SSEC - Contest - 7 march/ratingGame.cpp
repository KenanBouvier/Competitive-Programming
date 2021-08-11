#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<int> a(3);
    vector<int> b(3);

    for(int i = 0;i <3;i++){
        int x; cin>>x;
        a[i] = x;
    }
    for(int i = 0;i <3;i++){
        int x; cin>>x;
        b[i] = x;
    }
    int f = 0;
    int s = 0;
    for(int i= 0; i<3;i++){
        if(a[i]>b[i]){
            f++;
        }
        else if(b[i]>a[i]){
            s++;
        }
    }
    cout<<f<<" "<<s<<"\n";

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();
    
    return 0;
}