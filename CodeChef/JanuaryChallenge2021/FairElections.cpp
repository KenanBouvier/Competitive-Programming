// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int fairElections(vector<int> a, vector<int> b){
    int ans =0 ;
    int sumA = accumulate(a.begin(),a.end(),0);
    int sumB = accumulate(b.begin(),b.end(),0);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    while(sumA<sumB){
        int aMin = a.front();
        int bMax = b.back();

        if(aMin > bMax){
            cout<<ans<<endl;
            return -1;
        }
        sumA = sumA - aMin +bMax;
        sumB = sumB - bMax + aMin;

        a.erase(a.begin());
        b.pop_back();

        ans++;
    }

    return ans;
}


int main(){
    int ans, N, M, T;
    cin>>T;

    while(T--){
        vector<int> a;
        vector<int> b;
        cin>>N;
        cin>>M;

        for(int i = 0; i < N; i++){
            int n;
            cin>>n;
            a.push_back(n);
        }
        for(int i = 0 ; i < M; i++){
            int m;
            cin>>m;
            b.push_back(m);
        }

        ans = fairElections(a,b);
        cout<<ans<<endl;
    }
    return 0;
}