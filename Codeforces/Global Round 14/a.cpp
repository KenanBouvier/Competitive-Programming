#include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n,x; cin>>n>>x;
        vector<int> ans;
        queue<int> q;
        bool ok = true;

        for(int i = 0 ;i<n;++i){
            int a; cin>>a;
            q.push(a);
        }
        int noRemoves = 0;
        while(!q.empty()){
            int f = q.front();
            q.pop();
            if(f!=x){
                x-=f;
                ans.push_back(f);
                noRemoves = 0;
            }
            else{
                q.push(f);
                noRemoves++;
                if(noRemoves == q.size()){
                    ok = false;
                    break;
                }
            }

            
        }

        if(!ok){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for(int x :ans){
                cout<<x<<" ";
            }
            cout<<'\n';
        }
    }

    return 0;
}