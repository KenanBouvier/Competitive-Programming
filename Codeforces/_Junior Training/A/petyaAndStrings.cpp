#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string a,b; cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int diff = 0;

    for(int i = 0;i<a.size();++i){
        //make all same case i.e all lowerCase
        diff += a[i] - b[i];
        if(diff>0){
            cout<<1;
            return 0;
        }
        else if(diff<0){
            cout<<-1;
            return 0;
        }
    }
    if(diff>0){ // first string > second string
        cout<<1<<'\n';
    }
    else if(diff<0){ // first string < second string
        cout<<-1<<'\n';
    }
    else{
        cout<<0<<'\n';
    }
    
    return 0;
}