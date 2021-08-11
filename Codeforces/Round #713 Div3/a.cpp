#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n; cin>>n;
    vector<vector<char>> matrix(n,vector<char>(n,0));
    pair<int,int> p1 = {-1,-1};
    pair<int,int> p2 = {-1,-1};
   for(int i = 0 ;i<n;++i){
       for(int j = 0 ;j<n; ++j){
           cin>>matrix[i][j];
           if(matrix[i][j]=='*'){
               if(p1.first ==-1 && p1.second ==-1){
                   p1 = {i,j};
               }
               else{
                   p2 = {i,j};
               }
           }
       }
   }
//    cout<<p1.first<<" "<<p1.second<<endl;
//    cout<<p2.first<<' '<<p2.second<<endl;
   pair<int,int> other1;
   pair<int,int> other2;

   if(p1.first == p2.first){ //same row
        other1.second = p1.second;
        other2.second = p2.second;
        if(p1.first+1<n){
            other1.first = p1.first+1;
            other2.first = p2.first+1;
        }
        else{
            other1.first = p1.first-1;
            other2.first = p2.first-1;
        }
   }
   else if(p1.second == p2.second){ //same col
        other1.first = p1.first;
        other2.first = p2.first;
        if(p1.second+1<n){
            other1.second = p1.second+1;
            other2.second = p2.second+1;
        }
        else{
            other1.second = p1.second-1;
            other2.second = p2.second-1;
        }
   }
   else{ //dif row and col
        other1.first = p1.first;
        other1.second = p2.second;
        other2.first = p2.first;
        other2.second = p1.second;
   }

    matrix[other1.first][other1.second] = '*';
    matrix[other2.first][other2.second] = '*';

    // cout<<other1.first<<" "<<other1.second<<endl;
    // cout<<other2.first<<" "<<other2.second<<endl;


    for(int i = 0 ;i<n;++i){
        for(int j = 0 ;j<n;++j){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0 ;
}