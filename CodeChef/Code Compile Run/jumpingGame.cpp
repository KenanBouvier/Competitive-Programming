#include <bits/stdc++.h>
using namespace std;


int solve(){
    string s;
    cin>>s;
    map<char,int> m;

    for(int i = 0; i<s.size();i++){
        m[s[i]]++;
    }

    if(m['U']!=m['D']){
        cout<<"false";
        return 0;
    }
    if(m['L']!=m['R']){
        cout<<"false";
        return 0;
    }
    cout<<"true"; 
    return 1;

}

int main(){ 
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0;
}