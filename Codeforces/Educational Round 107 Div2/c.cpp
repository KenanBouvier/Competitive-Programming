#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,q; cin>>n>>q;

    unordered_map<int,pair<int,int>> m; //colour to {index,not shift};

    for(int i = 1 ;i<=n;++i){
        int a; cin>>a;

        if(m[a].first==0){
            m[a].first = i;
        }
    }

    int globalShift = 1;
cout<<"global shift is "<<globalShift<<endl;
        for(auto p : m){
            cout<<p.first<<" "<<p.second.first<<","<<p.second.second<<endl;
        }
        cout<<endl;
        
    while(q--){
        int query; cin>>query;
        cout<<"Query: "<<query<<endl;
        if(m[query].first == 1){
            cout<<1<<" ";
            continue;
        }
        m[query].second +=1;
        cout<<m[query].first+globalShift-m[query].second<<" ";
        m[query].first = 1;
        
        globalShift++;

        cout<<"global shift is "<<globalShift<<endl;
        for(auto p : m){
            cout<<p.first<<" "<<p.second.first<<","<<p.second.second<<endl;
        }
        cout<<endl;
    }


    // for(int m = 0;m<q;++m){
    //     int query; cin>>query;
    //     int pos = 1;
    //     for(int i = deck.size()-1;i >=0 ;--i){
    //         if(deck[i]==query){
    //             cout<<"found at "<<i<<endl;
    //             // cout<<i<<' ';
    //             deck.push_back(deck[i]);
    //             deck[i] = 0;
    //             break;
    //         }
    //         pos++;
    //     }

    // }
    
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    solve();
    return 0 ;
}