#include <bits/stdc++.h>

using namespace std;


    int secondHighest(string s) {
        set<int> st;
        
        for(int i = 0; i<s.size();i++){
           if(isdigit(s[i])){
               st.insert((int)s[i]-48);
           }
        }
        vector<int> v(st.begin(),st.end());
        if(v.size()<=1){
            return -1;
        }
        else{
            sort(v.begin(),v.end());
            return v[v.size()-2] ;
        }
    }