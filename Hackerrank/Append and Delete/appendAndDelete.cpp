#include <bits/stdc++.h>

using namespace std;


string solve(string s, string t, int k){
    int steps = 0;

    for(int i = 0; i<s.size();i++){
        if(s[i] == t[i]){
            continue;
        }
        int removeNum = s.size()-i;
        steps+=removeNum;

        steps+=t.size()-i;

        if(steps>k){
            cout<<"No";
            return "No";
        }
        break;
    }

    if((k-steps)%2 ==0 || k-s.size()-t.size()>=0){
        cout<<"Yes";
        return "Yes";
    }
    return "No";
}

int main(){
    solve("abcd","abcdert",10);
    return 0;
}