#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    int n; cin>>n;
    string s; cin>>s;
    vector<int> v;

    /*

    start at position i
    traverse left until cur>=prev
    ans = number of steps until stopped

    */

    for(int i = 0; i<s.size();++i){
        int ans = 0;
        int prev = INT_MAX;
        for(int j = i ;j>=0 ;j--){
            int cur = (int) s[j];

            if(cur<prev){
                ans++;
            }
            else{
                v.push_back(ans);
                break;
            }
            if(j == 0){
                v.push_back(ans);
                break;
            }
            prev = cur;
        }
        
    }
    cout<<"Case #"<<caseNum<<": ";
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<'\n';
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