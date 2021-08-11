#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;cin>>n;
    
	vector<vector<int> > v(n,vector<int>(0,0));
    vector<int> level(n);
    vector<bool> vis(n);

	queue <int> q;
	q.push(0);
	level[ 0 ] = 0 ;  //Setting the level of the source node as 0
	vis[ 0 ] = true;

	for(int i = 0;i<n;i++){
		int a,b; cin>>a>>b;
        a--;
        b--;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int x; cin>>x;

        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            
                    level[ v[ p ][ i ] ] = level[ p ]+1;                 
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
      			}
            }
        }
		int ans = 0;
		for(int i =0 ;i<n;i++){
			if (level[i] = x-1){
				ans++;
			}
		}
		cout<<ans;

	return 0;

}


