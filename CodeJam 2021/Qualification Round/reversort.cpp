#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n; cin>>n;

    vector<int> v(n);

    for(int i = 0 ;i<n;i++){
        cin>>v[i];
    }
    int ans = 0;

    for(int i = 0; i<n;i++){
        int min = INT_MAX;
        int pos = 0;
        for(int j = i;j<n;j++){
            if(v[j]<min){
                min= v[j];
                pos = j;
            }
        }

        reverse(v.begin()+i,v.begin()+pos+1);

        if(i==n-1){
            break;
        }
        ans+= pos-i+1;
    }
    cout<<ans<<"\n";

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
    int c = 1;
     while(T--){
         cout<<"Case #"<<c<<": ";
         solve();
         c++;
     }

     return 0;
}