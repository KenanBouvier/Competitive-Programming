#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int N,M; cin>>N>>M;

        //need x 
        int x,y; cin>>x>>y; 
        // x = need solved
        // y = needed if x is -1

        // f = solved
        // p = partial
        // u = not solved
        string ans = "";
        for(int i = 0 ;i<N;++i){
            string c; cin>>c;

            int solved = 0;
            int partial = 0;
            for(int j = 0; j<M;++j){
                if(c[j]=='F'){
                    solved++;
                }
                else if(c[j] == 'P'){
                    partial++;
                }
            }
            if(solved>=x){
                ans+='1';
            }
            else if(solved == x-1 && partial>=y){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        cout<<ans<<"\n";
    }


	return 0;
}