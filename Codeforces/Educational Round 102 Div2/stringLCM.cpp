#include <bits/stdc++.h>
using namespace std;

int solve(){
    string s,t;
    //s is larger string
    cin>>s>>t;

    if(t.size()>s.size()){
        swap(s,t);
    }

    if(t.size()%2 != 0 && s.size()%2 == 0 || t.size()%2 == 0 && s.size()%2 != 0){
        cout<< -1<<endl;
        return 0;
    }

    int tCounter = 0;
    for(int i = 0 ;i <s.size(); i++){
        if(s[i] != t[tCounter] ){
            cout<< -1<<endl;
            return 0;
        }

        if(tCounter+1 == t.size()){
            tCounter = 0;
        }
        else{
            tCounter++;
        }
    }

    int lcmSize = t.size();

    if(t.size()%2 != 0){
        
    }

    

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}