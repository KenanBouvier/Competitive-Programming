#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    pair<int,int> pos;
    for(int i = 0;i<5;++i){
        for(int j = 0 ;j<5;++j){
            int a; cin>>a;
            if(a ==1){
                pos.first = i;
                pos.second = j;
            }
        }
    }
    // pos = {2,1}
    cout<<abs(pos.first-2)+abs(pos.second-2);


    return 0;
}