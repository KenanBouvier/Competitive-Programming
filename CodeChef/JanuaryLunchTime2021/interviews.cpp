#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);

    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        v[i] = a;
    }

    bool slow = false;
    bool bot = true;
    bool accepted = false;

    double requiredSolved = ceil((double)n/2);
    int solved = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i]!= -1){
            solved++;
        }
        if(v[i]>k){
            slow = true;
        }
        if(v[i]>1){
            bot = false;
        }

    }

    if(solved<requiredSolved){
        cout<<"Rejected\n";
    }
    else if(slow){
        cout<<"Too Slow\n";
    }
    else if(bot && solved == n){
        cout<<"Bot\n";
    }
    else{
        cout<<"Accepted\n";
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