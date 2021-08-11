#include <bits/stdc++.h>

using namespace std;

int solve(){
    string s;
    cin>>s;
    if(s.size()<10){
        cout<<"NO"<<endl;
        return 0;
    }
    bool lower = false,upper = false,digit = false,special = false;
    set<char> specialChars ={ '@', '#', '%', '&', '?'  };

    for(int i = 0; i<s.size(); i++){
        if(i>0 && i<s.size()-1){
            if(specialChars.find(s[i]) != specialChars.end()){
                special = true;
            }
            else if(isdigit(s[i])){
                digit = true;
            }
            else if(s[i] ==toupper(s[i])){
                upper = true;
            }
            
        }
        if(s[i] == tolower(s[i])){
            lower = true;
        }
    }

    if(!lower || !upper || !digit || !special){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        return 1;
    }
    
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