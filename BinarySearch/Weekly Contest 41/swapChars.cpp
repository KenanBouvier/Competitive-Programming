#include <bits/stdc++.h>

using namespace std;

int solve(string s, string t) {
    unordered_map<char,int> a;//for S
    unordered_map<char,int> b;//for T
    bool foundPair = 0;
    bool singleFound = false;
    int ans = 0;

    if(s.compare(t)==0){
        return 0;
    }

    for(int i = 0; i<s.size(); i++){
        if(!foundPair){
            if(s[i]!= t[i]){
                ans++;
                if(a.find(t[i]) != a.end() && b.find(s[i])!= b.end()){
                    cout<<"pair found"<<endl;
                    foundPair = true;
                }
                else if(a.find(t[i]) != a.end() || b.find(s[i])!= b.end()){
                    singleFound = true;
                }

                else{
                    a[s[i]]++;
                    b[t[i]]++;
                }
            }

        }
        else{
            if(s[i]!= t[i]){
                ans++;
            }
        }
    }

    if(foundPair){
        ans-=2;
        return ans;
    }
    if(singleFound){
        return ans-1;
    }
    return ans;
}

int main(){
    string s,t;
    solve(s,t);
    return 0;
}