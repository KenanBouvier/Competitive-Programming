#include <bits/stdc++.h>
using namespace std;


void solve(){
    vector<vector<int>>m(6,vector<int>(6, 1));
    vector<vector<bool>>visited(6,vector<bool>(6,false));
    queue<pair<int,int>>q;
    
    for(int i = 0;i <6;i++){
        for(int j = 0;j<6;j++){
            int a; cin>>a;
            m[i][j] = a;
        }
    }

    if(m[0][0]==1){
        cout<<"No"<<"\n";
        return;
    }
    q.push({0,0});
    visited[0][0] = true;

   while(!q.empty()) {
       pair<int,int> p = q.front();
       pair<int,int> below = {p.first+1,p.second};
       pair<int,int> right = {p.first,p.second+1};
       pair<int,int> left = {p.first,p.second-1};
       q.pop();

        if(p.first==5 && p.second == 5){
            cout<<"Yes"<<"\n";
            return;
        }
       if(below.first<=5 && visited[below.first][below.second]==false){
           if(m[below.first][below.second]==0){
               q.push(below);
           }
           visited[below.first][below.second] = true;
       }
       if(right.second<=5 && visited[right.first][right.second]==false){
           if(m[right.first][right.second]==0){
               q.push(right);
           }
           visited[right.first][right.second]= true;
       }
       if(left.second>=0 && visited[left.first][left.second]==false){
           if( m[left.first][left.second]==0){
               q.push(left);
           }
           visited[left.first][left.second] = true;
       }
   }
   cout<<"No"<<"\n";
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();
    return 0;
}