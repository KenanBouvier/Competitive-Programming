#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b; cin>>a>>b;
    // a -> 0
    // b -> 1
    string s; cin>>s;

    if(a%2 !=0 && b%2 !=0){
        cout<<-1<<'\n';
        return;
    }
    int zeroesNeeded = a;
    int onesNeeded = b;
    int question = 0;

    for(int i = 0 ;i<s.size()/2;++i){
        if(s[i]!='?' && s[s.size()-1-i]!='?'){ //check if palindrome 
            if(s[i]!=s[s.size()-1-i]){
                cout<<-1<<'\n';
                return;
            }
        }

        if(s[i]=='0'|| s[s.size()-1-i]=='0'){
            s[i] = '0';
            s[s.size()-1-i] = '0';
            zeroesNeeded-=2;
        }
        else if(s[i]=='1'||s[s.size()-1-i]=='1'){
            s[i] = '1';
            s[s.size()-i-1] = '1';
            onesNeeded-=2;
        }
    }
    if(s.size()%2!=0){
        if(s[s.size()/2]=='0'){
            zeroesNeeded--;
        }
        else if(s[s.size()/2]=='1'){
            onesNeeded--;
        }
        else{//question
            if(zeroesNeeded%2!=0 && onesNeeded%2!=0){
                cout<<-1<<'\n';
                return;
            }
            if(zeroesNeeded%2!=0){
                zeroesNeeded--;
                s[s.size()/2] = '0';
            }
            else if(onesNeeded%2 != 0){
                onesNeeded--;
                s[s.size()/2] = '1';
            }
            else{
                cout<<-1<<'\n';
                return;
            }
        }
    }
    if(onesNeeded<0 || zeroesNeeded<0){
        cout<<-1<<'\n';
        return;
    }

    for(int i = 0;i<s.size()/2;++i){
        if(s[i]=='?'){
            if(onesNeeded>=2){
                onesNeeded-=2;
                s[i] = '1';
                s[s.size()-1-i] = '1';
            }
            else if(zeroesNeeded>=2){
                zeroesNeeded-=2;
                s[i] = '0';
                s[s.size()-1-i] = '0';
            }
        }
    }
    cout<<s<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0 ;
}