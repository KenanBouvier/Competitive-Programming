#include <bits/stdc++.h>

using namespace std;


int main(){
    long long n;
    cin>>n;
    vector<long long> path = {n}; 
    while(n!=1){
        if(n%2==0){
            n/=2;
        }
        else{
            n*=3;
            n++;
        }
        

        path.push_back(n);
    }
    for(long long i : path){
        cout<<i<<" ";
    }

    return 0;
}