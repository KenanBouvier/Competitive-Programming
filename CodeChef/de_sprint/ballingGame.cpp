#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n ; cin>>n;
    vector<int> v;

    for(int i = 0; i<n; i++){
        string a;cin>>a;
        if(a[0]=='X'){ //remove last score
            v.pop_back();
        }
        else if(a[0]=='Y'){ //add score double the prev
            v.push_back(v.back()*2);
        }
        else if(a[0]=='+'){ //add sum of last two scores
            v.push_back(v[v.size()-1]+v[v.size()-2]);
        }
        else{
            v.push_back(stoi(a));
        }
        
    }

    cout<<accumulate(v.begin(),v.end(),0);
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);

    solve();

    return 0;
}
