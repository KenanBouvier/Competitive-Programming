#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n; cin>>n;
    int a,b,c; cin>>a>>b>>c;
    string s; cin>>s;
    
    vector<int> v;

    for(int i = 0 ;i<n;i++){
        int correspond = (int)s[i]-97 ;
        correspond %=3;
        if(correspond==0){
            v.push_back(a);
        }
        else if(correspond==1){
            v.push_back(b);
        }
        else{
            v.push_back(c);
        }
    }

    //kadane's
    int globalMax = INT_MIN;
    int maxCur = 0;

    for(int i = 0 ;i<n;i++){
        maxCur = max(v[i],maxCur+v[i]);
        maxCur = max(0,maxCur);
        if(maxCur>globalMax){
            globalMax = maxCur;
        }
    }
    cout<<globalMax<<"\n";
    
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    solve();

    return 0;
}