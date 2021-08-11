#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    int n; cin>>n;
    vector<pair<int,int> >v;

    for(int i = 0;i <n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<pair<int,int>> original = v;
    sort(v.begin(),v.end());

    map<pair<int,int>, char> m;
    pair<int,int> c = v[0],j;
    
    m[c] = 'C';
    bool impossible = false;

    for(int i = 1; i<v.size();i++){
        pair<int,int> p = v[i];
        if(p.first>= c.first && p.first<c.second){ // IF C DOESN"T WORK
            if(p.first>=j.first && p.first<j.second){ // IF J DOESN"T WORK EITHER
                impossible = true;
                break;
            }
            else{ // J WORKS
                j = p;
                m[j] = 'J';
            }
        }
        else{ //IF C DOES WORK
            c = p;
            m[c] = 'C';
        }
    }
    string ans= "";
    if(impossible){
        ans = "IMPOSSIBLE";
    }
    else{
        for(pair<int,int> p : original){
            ans+= m[p];
        }
    }

    cout<<"Case #"<<caseNum<<": "<<ans<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    int total = t;

    while(t--){
        int caseNum = total-t;
        solve(caseNum);
    }

    return 0;
}