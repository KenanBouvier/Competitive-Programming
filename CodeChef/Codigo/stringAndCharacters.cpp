#include <bits/stdc++.h>


using namespace std;

bool solve(){
    int n;
    char a;
    string str;
    cin>>str;
    cin>>n;
    set<int> s;

    for(int i = 0 ; i<n; i++){
        cin>>a;
        s.insert(a);
    }

    for(int i = 0; i<str.size();i++){
        if(find(s.begin(),s.end(),str[i])==s.end()){
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<1<<endl;
    return 1;

}



int main(){
    int T;
    cin>>T;

    while(T--){
        solve();
    }


    return 0 ;
}