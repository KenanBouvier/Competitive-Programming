#include <iostream>
using namespace std;

int b(string s){
    int ans = 0;
    for(int i = 0; i <s.size();i++){
        for(int j = i+1; j< s.size();j++){
            if (s[i] == s[j]){
                ans++;
            }
        }
        
    }
    return ans*2 + s.size();
}

int main(){
    int ans;
    string s;
    cin>>s;
    ans = b(s);
    cout<<ans;
    return 0;
}