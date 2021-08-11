#include <bits/stdc++.h>

using namespace std;


int main(){
    int q = 1;
    int T;
    cin>>T;

    while(T--){
        
        int N,B,a,ans = 0;
        vector<int> v;
        cin>>N;
        cin>>B;
        for(int i = 0 ; i<N; i++){
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        for(int h : v){
            if(B-h >=0){
                B-=h;
                ans++;
            }
            else{
                break;
            }
        }
        cout<<"Case #"<<q<<": "<<ans<<endl;
        q++;
    }

    return 0;
}