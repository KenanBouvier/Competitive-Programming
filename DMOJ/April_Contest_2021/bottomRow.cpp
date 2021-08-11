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


    vector<string> ans;

    queue<vector<pair<string,pair<int,int>>>> q;
    q.push({{"",{n-1,0}}});


    while(!q.empty()){
        vector<pair<string,pair<int,int>>> path = q.front();
        pair<int,int> f = path[path.size()-1].second;
        q.pop();

        int row = f.first;
        int col = f.second;
        if(matrix[f.first][f.second]) continue;
        matrix[row][col] = true;

        vector<pair<string,pair<int,int>>> newPath = path;
        string str = path[path.size()-1].first;
        cout<<str<<endl;

        if(row==0 && col == n-1){
            // cout<<"FOUND"<<endl;
            ans.push_back(str);
            // break;
        }

        if(row-1 >=0){
            str+='U';
            newPath.push_back({str,{row-1,col}});
            q.push(newPath);
        }
        if(row+1 < n){
            str+='D';
            newPath.push_back({str,{row+1,col}});
            q.push(newPath);;
        }
        if(col+1 < n){
            str+='R';
            newPath.push_back({str,{row,col+1}});
            q.push(newPath);
        }
        if(col-1 >= 0){
            str+='L';
            newPath.push_back({str,{row,col-1}});
            q.push(newPath);
        }
    }

    if(ans.size()==0){
        cout<<"IMPOSSIBLE\n";
    }

	return 0;
}