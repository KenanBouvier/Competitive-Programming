#include <bits/stdc++.h>

using namespace std;

vector<bool> visited;
vector<vector<int> > graph;
vector<int> shortestReach;
int depth=0;

void addEdge(int u, int v){
    graph[u].push_back(v);
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int f = q.front();
        q.pop();
        shortestReach[f-1] = depth;
        if(q.empty()){
            depth++;
        }

        for(auto i = graph[f].begin(); i!=graph[f].end();i++){
            if(!visited[*i]){
                q.push(*i);
                visited[*i] = true;
            }
        }
    }


    for(int val : shortestReach){
        if(val<=0){
            cout<<-1<<" ";
        }
        else{
            cout<<val*6<<" "; // the weight of each edge is 6
        }
    }

}

int main(){
    int q;
    cin>>q;

    while(q--){
        int n,e;
        cin>>n>>e;

        visited.assign(n-1,false);
        shortestReach.assign(n-1,-1);
        graph.assign(n,vector<int>());

        int u,v,s;

        for(int i = 0; i <e ;i++){
            cin>>u>>v;
            u--;
            v--;
            addEdge(u,v);
            addEdge(v,u);
        }
        cin>>s;
        s--;
        shortestReach[0] = 0;
        bfs(s);
    }

    return 0;
}
