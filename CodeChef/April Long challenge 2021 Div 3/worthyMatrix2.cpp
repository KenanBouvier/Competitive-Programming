#include <bits/stdc++.h>
using namespace std;

int possible(int N,int M, int startSz,int r){
    int ans =0;
    for(int sz = startSz; sz<=min(N,M)-r;++sz){
        ans+=(N-sz-r+1)*(M-sz+1); 
        cout<<(N-sz-r+1)*(M-sz+1)<<" added to complete from sz "<<sz<<endl;
    }
    return ans;
}

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
    // cout<<ans<<" before"<<endl;
    int mxSquare = min(N,M); // N rows ,  M columns

    for(int sz = 2 ; sz<=mxSquare;++sz){ //iterate square sizes
        for(int row = 0; row<=N-sz;++row){
            double sum = 0;
            for(int x = row;x<row+sz;++x){
                for(int y = 0;y<sz;++y){
                    sum+=matrix[x][y];
                }
            }
            if(sum/(sz*sz)>=K){
                cout<<ans<<" before"<<endl;
                ans+=possible(N,M,sz,row);
                cout<<ans<<"\n";
                return;
                // ans+=(N-sz-row+1)*(M-sz+1); //Ans just for that size
                // cout<<(N-sz-row+1)*(M-sz+1)<<" added to complete from sz "<<sz<<endl;
                break;
            }

            // cout<<sum<<endl;

            // for(int col = 0; col<M-sz;++col){
            int col = 0;
            while(col<M-sz){
                //_______________________
                for(int r = row ; r<row+sz;++r){
                    sum-=matrix[r][col];
                    sum+=matrix[r][col+sz];
                } 
                col++;

                if(sum/(sz*sz)>=K){
                    // cout<<"NOT LEFT"<<endl;
                    // cout<<"Column value is: "<<col<<endl;
                    ans+= (M-sz-col+1);
                    cout<<(M-sz-col+1)<<" rest over for sz "<<sz<<endl;
                    break;
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