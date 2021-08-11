#include <bits/stdc++.h>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries){
    for(int i = 0; i<k ;i++){
        int last = a[a.size()-1];
        a.insert(a.begin(),last);
        a.erase(--a.end());
    }
    for(int q : queries){
        cout<<a[q]<<endl;
    }
}


int main(){
    vector<int> a = {1,2,3};
    circularArrayRotation(a,2,{0,1,2});

    return 0;
}