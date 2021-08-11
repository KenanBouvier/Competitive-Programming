#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<int> v(n);

    for(int i = 0;i<n;++i){
        cin>>v[i];
    }

    for(int i = 0;i<v.size();++i){
        
        if(k==0) break;

        if(v[i]==n){ n--;continue;}
        auto it = find(v.begin()+i,v.end(),n);
        int pos = it-v.begin();
        iter_swap(v.begin()+i,it);

        k--; 
        n--;
    }

    for(int x : v){
        cout<<x<<" ";
    }

    return 0;
}