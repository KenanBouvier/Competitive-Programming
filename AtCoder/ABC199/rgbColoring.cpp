#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin>>n>>m;

    // vector<vector<pair<int,int>>> adj(n);
    vector<vector<int>> adj(n);

    for(int i = 0; i<m;++i){
        int a,b; cin>>a>>b;
        // adj[a].push_back({b,INT_MAX});
        // adj[b].push_back({a,INT_MAX});
        adj[a].push_back(b);
        adj[b].push_back(a);
        if(adj[a].size()>2 || adj[b].size()>2) cout<<0; return 0;
    }

    vector<bool> visited(n,false);
    vector<int> colours(n,3);

    // node possibilities = 3 - min(all adjacents)
    // Not possible if any node has more than 3 adjacents

    long long ans = 1;
    for(int i = 1; i<=n;++i){
        if(visited[i])continue;

        queue<int> q;
        q.push(i);

        while(!q.empty()){
            int f = q.front();
            q.pop();
            if(visited[f]) continue;
        
            int mn = 3;
            
            for(int adjacent : adj[f]){
                mn = min(colours[adjacent],mn);
                q.push(adjacent);
            }
            colours[f] = mn;

        }
    }


	return 0;
}