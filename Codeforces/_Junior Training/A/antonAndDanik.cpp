#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin>>n;
    string s; cin>>s;
    int anton = 0;
    int danik = 0;
    for(int i = 0;i<s.size();++i){
        if(s[i]=='A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(anton>danik){
        cout<<"Anton";
    }
    else if(danik>anton){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

    return 0;
}