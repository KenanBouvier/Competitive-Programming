#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void dfs(pair<int,int> u, vector<bool>& visited, vector<vector<bool>>&matrix){
        int n = matrix.size();
        int row = u.first;
        int col = u.second;
        matrix[row][col] = true;
        
        if(row==0 && col == n-1){
            
        }

        if(row-1 >=0){

        }
        if(row+1 < n){

        }
        if(col+1 < n){

        }
        if(col-1 >= 0){

        }
}

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


    while(!q.empty()){

    }

    for(string s : ans){
        // cout<<s<<" ";
    }

	return 0;
}