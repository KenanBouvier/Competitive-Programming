#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tied(NULL);
using namespace std;

int fairRations(vector<int> B){
    int ans = 0;

    int sum = accumulate(B.begin(),B.end(),0);
    if(sum%2!=0){
        // cout<<"NO";
        return -1;
    }

    for(int i =0; i<B.size()-1;i++){
        if(B[i]%2 ==0){
            B[i] = 0;
        }
        else{
            B[i] = 1;
        }
        if(B[i] == 0){
            continue;
        }
        else{
            B[i]=0;
            B[i+1]+=1;
            ans++;
        }
    }
    return ans*2;
}


int main(){
    vector<int> v ={};
    fairRations(v);

    return 0;
}