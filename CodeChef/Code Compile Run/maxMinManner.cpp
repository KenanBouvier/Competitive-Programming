#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ;i <n; i++){
        int a;
        cin>>a;
        v[i] = a;
    }

    bool minVal = false; // ascend means get the next min
    int minimum = 0;
    int maximum = v.size()-1;    

    if(v.size() %2 == 0){
        for(int i = 0; i<v.size()/2; i++){
            cout<<v[maximum]<<" ";
            cout<<v[minimum]<<" ";
            minimum++;
            maximum--;
        }
    }
    else{
        for(int i = 0; i<=(v.size()-1)/2;i++){
            if(i == (v.size()-1)/2){
                cout<<v[maximum]<<" ";
                break;
            }
            cout<<v[maximum]<<" ";
            cout<<v[minimum]<<" ";
            minimum++;
            maximum--;
        }
    }
}

int main(){ 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}