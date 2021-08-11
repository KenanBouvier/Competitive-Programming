#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
long long findGCD(vector<long long> arr)
{
    long long result = arr[0];

    for (long long i = 1; i < arr.size(); i++){
        result = gcd(arr[i], result);
        if(result == 1){
           return 1;
        }
    }
    return result;
}

void addEdge(vector <vector<pair<long long, pair<long long,long long>>> >& adj, long long u,long long v, long long wt,long long limit)
{
    adj[u].push_back({v, {wt,limit}});
    adj[v].push_back({u, {wt,limit}});
}
//    node , { weight, limit }


void solve(long long caseNum){
    long long n,q; cin>>n>>q;
    

    // vector<pair<long long, pair<long long,long long>> > adj[n+1];
    vector<vector<pair<long long, pair<long long,long long>>> > adj(n+1);
    // cout<<adj.size()<<endl;

    for(long long i=  0;i<n-1;++i) {
        long long X,Y,L,A; cin>>X>>Y>>L>>A;
        addEdge(adj,X,Y,A,L);
    }

        /* 
        city C -> 1   
        */ 

    vector<long long> ans;
    cout<<"Case #"<<caseNum<<": ";

    unordered_map<long long,vector<long long>> m;  // from City : Path to 1

    while(q--){
        long long C,W; cin>>C>>W;
        vector<long long> finalAns;

        if(m.find(C)==m.end()){
            vector<bool> visited(n+1,false);
            queue<vector<long long>> q;
            q.push({C});

            while(!q.empty()){
                vector<long long> path = q.front();
                long long f = path[path.size()-1];
                visited[f] = true;
                q.pop();

                if(f == 1){
                    ans = path;
                    m[C] = path;
                    break;
                }

                for(auto p : adj[f]){
                    if(!visited[p.first]){
                        vector<long long> newPath = path;
                        newPath.push_back(p.first);
                        q.push(newPath);
                    }
                }
            }
        }
        else{
            ans = m[C];
        }

        long long prev = ans[0];
        for(long long i = 1;i<ans.size();++i){
            vector<long long> temp(ans.begin()+i,ans.end());
            m[ans[i]] = temp;

            long long cur= ans[i];
            long long wt;
            long long limit;
            for(auto p :adj[prev]){
                if(p.first ==cur){
                    wt = p.second.first;
                    limit = p.second.second;
                    break;
                }
            }

            if(W>=limit){
                finalAns.push_back(wt);
            }
            prev = cur;
        }
        
        if(finalAns.size()==0){
            cout<<0<<' ';
        }
        else{
            long long res = findGCD(finalAns);
            cout<<res<<' ';
        }
    }
    cout<<'\n';

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long t; cin>>t;
    long long caseNum = 1;
    while(t--){
        solve(caseNum);
        caseNum++;
    }
    return 0;

}