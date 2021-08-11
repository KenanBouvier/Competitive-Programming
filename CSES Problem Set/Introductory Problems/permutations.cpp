#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;

    if(n ==1){
        cout<<1;
        return 0;
    }

    if (n<=3){
        cout<<"NO SOLUTION";
        return 0;
    }

    if(n == 4){
        cout<<3<<" "<<1<<" "<<4<<" "<<2<<" ";
        return 0;
    }

    vector<int> v;

    //ODD NUMS
    for(int i = 1; i<=n;i+=2){
        v.push_back(i);
    }
    //EVEN NUMS
    for(int i = 2; i<=n;i+=2){
        v.push_back(i);
    }

    for(int e:v){
        cout<<e<<" ";
    }

    return 0;
}