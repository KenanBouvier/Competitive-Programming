#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N,M,K; cin>>N>>M>>K;
    vector<vector<int>> matrix(N,vector<int>(M));
    int ans = 0;

    for(int i = 0 ;i<N;++i){
        for(int j = 0;j<M;++j){
            cin>>matrix[i][j];
            if(matrix[i][j]>=K){
                ans++;
            }
        }
    }
    int mxSquare = min(N,M);
    

    for(int sz = 2 ; sz<=mxSquare;++sz){ //iterate through all square sizes
        for(int row = 0; row<=N-sz;++row){
            double sum = 0;
            for(int x = row;x<row+sz;++x){
                for(int y = 0;y<sz;++y){
                    sum+=matrix[x][y];
                }
            }
            if(sum/(sz*sz)>=K){
                ans++;
            }

            // cout<<sum<<endl;

            for(int col = 0; col<M-sz;++col){// loops give all submatrices of size sz
                //_______________________
                for(int r = row ; r<row+sz;++r){
                    sum-=matrix[r][col];
                    sum+=matrix[r][col+sz];
                } 
                if(sum/(sz*sz)>=K){
                    ans++;
                }
                // cout<<sum<<endl;

                //_______________________
                
            }
        }

    }
    cout<<ans<<"\n";

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }

    return 0 ;
}