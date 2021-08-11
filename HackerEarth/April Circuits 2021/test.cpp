#include <bits/stdc++.h>
using namespace std;

int main(){

    multiset<int> s = {1,1,2,324,4,5,6};
    auto it = s.find(1);
    s.erase(it);

    for(int x : s){
        cout<<x<<" ";
    }



    return 0;
}