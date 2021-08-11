#include <bits/stdc++.h>

using namespace std;

int solve(string s, string t){
    vector<char> vs, vt;
    bool single= false;
    for(int i = 0; i<s.size(); i++){
        if(s[i] != t[i]){
            vs.push_back(s[i]);
            vt.push_back(t[i]);
        }
    }

    for(int i =0 ; i<vs.size(); i++){

        //if t[i] == s[j]:
        //  Check if t[j] == s[i]   If true then pair found
        // 


        auto sPos = find(vs.begin(),vs.end(),vt[i]); //1
        auto tPos = find(vt.begin(),vt.end(),vs[i]); //2

        if(tPos != vt.end() || sPos != vs.end()){
            single = true;
        }
        
    }


    if(single){
        return vs.size()-1;
    }
    return vs.size();
}


int main(){
    cout<<solve("zfba","zbca");
    return 0;
}