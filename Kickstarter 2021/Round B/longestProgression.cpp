#include <bits/stdc++.h>
using namespace std;

int longest(int start, int r, vector<int> v){ // gets longest arithmetic seq. diff = r
    
}

void solve(int caseNum){
    int n; cin>>n;

    vector<int> v(n);
    for(int i = 0;i<n;++i){
        cin>>v[i];
    }
    vector<int> diffs(n-1);
    int prev = v[0];

    for(int i = 1; i<v.size();++i ){
        int cur = v[i];
        diffs[i-1] = cur-prev;
        prev = cur;
    }

    for(int x : diffs){
        cout<<x<<" ";
    }

    int ans = 0;
    for(int i = 0;i<diffs.size();++i){
        bool used = false;
        int local = 1;
        int prev = diffs[0];
        for(int j = 1;j <diffs.size();++j){
            int cur = diffs[i];
        }
        ans = max(ans,local);
    }


}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    int caseNum = 1;
    while(t--){
        solve(caseNum);
        caseNum++;
    }
    return 0;
}