#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
using namespace std;



int solve(){
    int n;
    cin>>n;
    string s = to_string(n);
    vector<int> v;

    for(char c : s){
        v.push_back((int)c -48);
    }
    
    int minElement = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());

    if(v[0] ==minElement){
        minElement = *max_element(v.begin(),v.end());
    }
    int index = -1;
    int maxIndex;
    bool found = false;
    for(int i = 0; i<s.size();i++){
        if(!found){
            if(v[i] == max){
                maxIndex = i;
                found = true;
            }
        }
        if(v[i+1] < v[i]){
            index = i;
            break;
        }
    }
    if(index == -1){
        index = maxIndex;
    }
    string ans= "";

    for(int i = 0; i<s.size();i++){
        if(i==index){
            continue;
        }
        ans+=s[i];
    }
    cout<<stoi(ans)<<endl;

}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}