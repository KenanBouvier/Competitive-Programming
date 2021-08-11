#include <bits/stdc++.h>

using namespace std;

string solve(string b){
    vector<char> v(b.begin(),b.end());
    bool moveable;
    map<char,int> m;

    if(b == ""){
        cout<<"YES";
        return "YES";
    }

    if(find(v.begin(),v.end(),'_') == v.end()){
        moveable = false;
    }
    else{
        moveable = true;
    }

    for(char c : v){
        m[c]++;
    }

    if(moveable){
        for(auto it : m){
            if(it.first == '_'){
                continue;
            }
            if(it.second < 2){
                cout<<"NO";
                return "NO";
            }
        }
        cout<<"YES";
        return "YES";
    }

    if(b.size() == 1){
        cout<<"NO";
        return "NO";
    }
 
    int prev,next;

    for(int i = 1; i < b.size();i++){
        prev = i-1;
        next = i+1;
        if(b[i] != b[prev] && b[i] != b[next]){
            cout<<"NO";
            return "NO";
        }
    }
    cout<<"YES";
    return "YES";

}

int main(){
    string s;
    s = "G";
    solve(s);

    return 0;
}