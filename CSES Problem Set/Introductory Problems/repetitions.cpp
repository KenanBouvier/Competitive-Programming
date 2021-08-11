#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false), cin.tie(NULL);
using namespace std;


int main(){
    fastio
    string s;
    cin>>s;

    int localMax = 0;
    int globalMax = 0;
    
    char curr = s[0];
    for(int i =0;i<s.size();i++){
        if(curr== s[i]){
            localMax++;
        }
        else{
            if(localMax>globalMax){
                globalMax = localMax;
            }
            curr = s[i];
            localMax = 1;
        }
    }

    cout<<max(localMax,globalMax);
    
    return 0;
}