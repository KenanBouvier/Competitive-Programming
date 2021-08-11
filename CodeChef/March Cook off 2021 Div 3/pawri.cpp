#include <bits/stdc++.h> 
using namespace std;

void solve(){
    string s; cin>>s;

    size_t index = 0;

    while(true){
        index = s.find("party",index);
        if(index == string::npos){
            break;
        }

        s.replace(index,5,"pawri");
    }
    cout<<s<<"\n";

}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}