#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<vector<bool>>& matrix){
    queue<pair<int,int>> q;
    vector<vector<bool>> visited(2,vector<bool>(matrix[0].size(),0));
    q.push({0,0});
    // q.push({1,0});
    while(!q.empty()){ 
        pair<int,int> f = q.front();
        q.pop();
        cout<<f.first<<' '<<f.second<<endl;

        if(visited[f.first][f.second]==true || matrix[f.first][f.second]==1){
            continue;
        }
        visited[f.first][f.second] = true;

        if(f.second == matrix.size()-1){
            return true;
        }

        if(f.first==0){// top row
            q.push({1,f.second});
            q.push({0,f.second+1});
        }
        else{//bottom row
            q.push({0,f.second});
            q.push({1,f.second+1});
        } 
        
    }
    return false;

}
int main(){
    
    cout<<isPossible();
    return 0;
}