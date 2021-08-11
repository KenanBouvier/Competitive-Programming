#include <iostream>
#include <vector>
#include <string>

using namespace std;

string decodeLetter(string s){
    vector<string> l = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};
    vector<string> newL;
    
    while(s.size()>0){
        int first = s[0] - '0';
        if(first == 0){
            for(int i = 0 ; i < l.size()/2;i++){
                newL.push_back(l[i]);
            }
        }
        else{
            for(int i = l.size()/2; i < l.size(); i++){
                newL.push_back(l[i]);
            }
        }
        s.erase(0,1);
        l = newL;
        newL.clear();
        
    }
    return l[0];
}

int main(){
    string ans = "";
    int T, N;
    string s; //"00010111"
    cin>>T;

    while(T--){
        cin>>N;
        cin>>s;

        for(int i = 0 ; i<N ; i+=4){
            ans+=decodeLetter(s.substr(i,4));
        }
        cout<<ans<<endl;
        ans = "";
    }
    return 0;
}