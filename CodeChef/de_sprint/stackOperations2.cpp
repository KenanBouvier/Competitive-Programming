#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    vector<int>v;
    int mx = INT_MIN;
    for(int i = 0; i<n;i++){
        int a; cin>>a;
        if(a>mx){
            mx = a;
        }
        v.push_back(a);
    }

    if(n==1){
        if(k%2 != 0){ 
            cout<<-1;
        }
        else{
            cout<<v[0];
        }
        return;
    }

    if(k>n){
        cout<<mx;
        return;
    }
    int m = INT_MIN;
    for(int i =0; i<k-1;i++){
        if(v[i]>m){
            m = v[i];
        }
        if(i == k-2){
            if(i+2<v.size() && v[i+2]>m){
                m = v[i+2];
            }
        }
    }
    cout<<m;

}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();

    return 0;
}