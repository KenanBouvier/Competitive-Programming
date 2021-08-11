#include <bits/stdc++.h>
using namespace std;

bool solve(){
    map<char,int>m;
    int swaps = 0;
    string a,b;
    cin>>a>>b;

    if(a.size() != b.size()){
        cout<<"NO"<<endl;
        return 0;
    }

    int n = a.size();
    vector<char> newA;
    vector<char> wrong;

    for(int i = 0; i<n ; i++){
        m[b[i]]++;
        m[a[i]]++;
        if(b[i] != a[i]){
            newA.push_back(a[i]);
            wrong.push_back(b[i]);
        }
    }

    for(pair<char,int> p : m){
        if(p.second%2 != 0){
            cout<<"No"<<endl;
            return 0;
        }
    }

    for(int i = 0; i<newA.size(); i++){
        if(newA[i]== wrong[i]){
            continue;
        }

        auto it = find(wrong.begin(),wrong.end(),newA[i]);
        int p = it-wrong.begin();

        if(find(newA.begin(),newA.end(),wrong[i]) != newA.end() && it != wrong.end()){   
            swaps++;
            swap(wrong[i],wrong[p]);
        }
        else{
            swap(wrong[i],wrong[p]);
            swaps++;
        }
    }
    if(swaps ==0){
        cout<<"No"<<endl;
        return 0;
    }
    else{
        cout<<"Yes "<<swaps<<endl;
        return 0;
    }    
}



int main(){
    int T;
    cin>>T;

    while(T--){
        solve();
    }
    return 0 ;
}