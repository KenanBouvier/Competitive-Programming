#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b; cin>>a>>b;
    int i = 1;
    int added = 0;

    for(int i = 1; i<= a+b; ++i){
        cout<<i<<" ";
        added++;
        if(added == a+b){
            return 0;
        }

        if((a+b)%2 != 0 && added+2 == a+b){
            cout<<i*-3<<' '<<i*3-i;
            return 0;
        }

        cout<<-1*i<<" ";
        added++;
        if(added == a+b){
            return 0;
        }
        
    }
    


    return 0;
}