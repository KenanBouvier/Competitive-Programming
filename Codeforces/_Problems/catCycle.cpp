#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a = n;
        int b = 1;
        bool found = false;
        set<pair<int,int>> s;
        int time = 0;
        while(k>1){
            
            a--;
            if(a<1){
                a = n;
            }

            b++;
            if(b>n){
                b = 1;
            }
            if(a==b){
                b++;
            }
            if(b>n){
                b = 1;
            }
            k--;
            time++;
            if(!found){
                int sz = s.size();
                s.insert({a,b});
                if(sz==s.size()){
                    found = true;
                    k%=time-1;
                }
            }
        }
        cout<<b<<"\n";
    }

    return 0;
}