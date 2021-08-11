#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<vector<bool>> matrix(n,vector<bool>(n,false));

    while(k--){
        int r,c; cin>>r>>c;
        c--;
        r = n-r;
        matrix[r][c] = true;
    }


    vector<pair<int,int>> ans;

    queue<vector<pair<int,int>>> q;
    q.push({{n-1,0}});
        

    while(!q.empty()){
        vector<pair<int,int>> path = q.front();
        pair<int,int> f = path[path.size()-1];
        q.pop();

        int row = f.first;
        int col = f.second;
        if(matrix[f.first][f.second]) continue;
        matrix[row][col] = true;

        vector<pair<int,int>> newPath = path;

        if(row==n-1 && col == n-1){
            ans = path;
            break;
        }

        if(row-1 >=0){
            newPath.push_back({row-1,col});
            q.push(newPath);
        }
        if(row+1 < n){
            newPath.push_back({row+1,col});
            q.push(newPath);;
        }
        if(col+1 < n){
            newPath.push_back({row,col+1});
            q.push(newPath);
        }
        if(col-1 >= 0){
            newPath.push_back({row,col-1});
            q.push(newPath);
        }
    }
    if(ans.size()==0){
        cout<<"IMPOSSIBLE\n";
    }
    else{
        string finalAns = "";
        pair<int,int> prev = ans[0];
        for(long unsigned int i = 1;i<ans.size();++i){
            pair<int,int> cur = ans[i];
            if(cur.first<prev.first){
                finalAns+='U';
            }
            else if(cur.first>prev.first){
                finalAns+='D';
            }
            else if(cur.second>prev.second){
                finalAns+='R';
            }
            else if(cur.second<prev.second){
                finalAns+='L';
            }
        }
        cout<<finalAns<<'\n';
    }


	return 0;
}