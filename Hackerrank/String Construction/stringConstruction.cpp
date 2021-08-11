#include <bits/stdc++.h>


using namespace std;

int solve(string s){
    int cost = 0;
    multiset<char> p;

    for(int i = 0; i<s.size();i++){
        if(p.find(s[i])==p.end()){
            p.insert(s[i]);
            cost++;
        }
    }

    cout<<cost;
}


int main(){
    solve("abab");        

    return 0;
}