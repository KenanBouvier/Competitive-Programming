#include <bits/stdc++.h>


using namespace std;

int ans = 0;

string reduceString(string s,int x ,int y,bool ok){
    string newS = "";

    //x = "ab"
    //y = "ba"
    for(int i =0 ; i<s.size(); i++){
        if(ok){
            if(s[i]=='a' && s[i+1]=='b'){
                ans+=x;
                i++;
            }
            else{
                newS+=s[i];
            }
        }
        else{
            if(s[i] =='b' && s[i+1]=='a'){
                ans+=y;
                i++;
            }
            else{
                newS+=s[i];
            }
        }
    }
    
    return newS;
}

int maximumGain(string s, int x, int y) {
    string u,v;

    bool xBetter = true;

    if(x<y){
        xBetter = false;
    }
    u = reduceString(s,x,y,xBetter);
    v = reduceString(u,x,y,xBetter);
    while(v.size()!=u.size()){
        u = v;
        v = reduceString(u,x,y,xBetter);
    }

    v = reduceString(u,x,y,!xBetter);

    while(v.size()!= u.size()){
        u = v;
        v = reduceString(u,x,y,!xBetter);
    }
    cout<<ans<<endl;

}

int main(){
    maximumGain("cdbcbbaaabab",4,5);
    return 0;
}
