// #include <unordered_set>
#include <bits/stdc++.h>
using namespace std;                


int makeAnagram(string a, string b) {
    map<char,int> one,two;
    int ans = 0;    

    for(char c : a){
        one[c]++;
    }
    for(char c : b){
        two[c]++;
    }

    for(pair<char,int> p : one){
        ans+= abs(p.second-two[p.first]);
        two[p.first] = 0;
    }
    for(pair<char,int> p : two){
        if(p.second != 0){
            ans+=p.second;
        }
    }

    cout<<ans;

}

int main(){

    makeAnagram("cde","abc");

    return 0;
}
    
    
    
