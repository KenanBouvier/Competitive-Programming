#include <bits/stdc++.h>


using namespace std;

string recheck(string s){
    string str = "";
    for(int i = 0; i< s.size(); i++){
        if(i+1>=s.size()){
            return str+=s[i];
        }
        if(s[i] == s[i+1]){
            i+=1;
        }
        else{
            str+=s[i];
        }
    }

    return str;
}


void solve(){
    string u;
    string v = "";
    cin>>u;

    while(true){
        v = recheck(u);
        if(v.size() == u.size()){
            cout<<v.size()<<endl;;
            break;
        }
        u = v;
    }
}


int main(){
    int T;
    cin>>T;

    while(T--){
        solve();
    }


    return 0 ;
}