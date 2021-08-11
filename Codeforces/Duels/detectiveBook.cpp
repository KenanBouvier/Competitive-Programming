#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n ;cin>>n;
    vector<int> v(n);
    for(int i= 0 ;i<n;i++){
        cin>>v[i];
    }
    int days = 0;
    int furthest = v[0];
    for(int i= 0 ;i<=n;i++){
        furthest = max(furthest,v[i]);
        if(i+1 == furthest){
            days++;
        }
    }

    cout<< days<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();
    
    return 0;
}