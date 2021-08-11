#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    string s;
    cin>>s;
    string ans = "";
    int prevDepth = 0;
    
    for(int i =0 ;i<s.size(); i++){
        int curr = (int)s[i] -48;
        if(curr == prevDepth){
            ans+=s[i];
        }
        else{
            int diff = curr - prevDepth;
            if(diff<0){
                for(int j =0 ;j<abs(diff);j++){
                    ans+=')';
                }
            }
            else{
                for(int j = 0; j<diff;j++){
                    ans+='(';
                }
            }
            ans+=s[i];
        }
        prevDepth = curr;
    }
    if(prevDepth>0){
       for(int i = 0; i<prevDepth;i++) {
           ans+=')';
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