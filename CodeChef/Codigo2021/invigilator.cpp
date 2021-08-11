#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,first,a;
    map<int,int> m; //int to position
    bool firstNum = true;
    cin>>n;

    for(int i = 1;i<=n;i++){
        cin>>a;
        if(firstNum){
            first = a;
            firstNum = false;
        }
        m[a] = i;
    }

    int curr =1;
    int next = 2;
    long ans = abs(m[curr]-m[first]);

    while(curr !=n){
        int distance = abs(m[next]-m[curr]);
        ans+=distance;
        curr++;
        next++;
    }

    cout<<ans<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}