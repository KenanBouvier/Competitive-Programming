#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i = 0; i<n; i++){
        int a; cin>>a;
        v[i] = a;
    }

    double curr = v[0];
    double next = v[1];
    int ans = 0;
    int i = 1;
    
    while(i<v.size()){
        if(max(curr,next)/min(curr,next) >2){
            if(next>curr){
                curr= curr*2;
            }
            else{
                curr = ceil(curr/2);
            }
            ans++;
        }
        else{
            curr = next;
            i++;
            next = v[i];

        }
    }

    cout<<ans<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    int total = t;

    while(t--){
        solve();
    }

    return 0;
}