#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        queue<int>football;
        queue<int>cricket;

        
        for(int i = 0; i<n;i++){
            int a;cin>>a;
            football.push(a);
        }
        for(int i = 0; i<m;i++){
            int a;cin>>a;
            cricket.push(a);
        }
        int switches = 0;
        int foot = true;
        while(!cricket.empty()&&!football.empty()){
            if(cricket.front()<football.front()){
                if(foot){
                    switches++;
                }
                foot = false;
                cricket.pop();
            }
            else{  // football is next
                if(!foot){
                    switches++;
                }
                foot = true;
                football.pop();
            }
        }
        bool footEnd;
        if(cricket.empty()){
            footEnd = true;
        }
        else{
            footEnd = false;
        }

        if(footEnd && !foot){
            switches++;
        }
        if(!footEnd && foot){
            switches++;
        }

        cout<<switches<<"\n";

    }


    return 0 ;
}