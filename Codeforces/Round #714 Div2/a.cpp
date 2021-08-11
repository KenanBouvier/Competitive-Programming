#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k; cin>>n>>k;

    int mxPeak = (n-1)/2;

    if(k>mxPeak){
        cout<<-1<<"\n";
        return;
    }

    vector<int> v(n);
    for(int i =1 ;i<=n;++i){
        v[i-1] = i;
    }
    if(k == 0){
        for(int e :v){
            cout<<e<<" ";
        }
        cout<<"\n";
        return;
    }



    vector<int> nums(n);
    int i = 0;
    int j = v.size()-1;
    int ke = 0;

    int peaks = 0;
    while(ke<n){
        nums[ke++] = v[i++];
        nums[ke++] = v[j--];

        peaks++;

        if(peaks ==k){ //fill rest without peaks
            for(int index = ke; ke<n;++ke){
                nums[ke]=  i+1;
                i++;
            }
            for(int x:nums){
                cout<<x<<" ";
            }
            cout<<"\n";
            return;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--){
    solve();
    }
    return 0 ;
}