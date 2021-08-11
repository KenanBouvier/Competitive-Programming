#include <bits/stdc++.h>

using namespace std;

// c.cpp -> 0.11 seconds
// cV2.cpp ->0.31 seconds

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long n; cin>>n;
    set<pair<long long,long long>> st;
    for(long long i = 0 ;i<n; ++i){
        long long a; cin>>a;
        st.insert({i+1,a});
    }

    long long Q; cin>>Q;
    
    while(Q--){
        long long X,K; cin>>X>>K;
        long long moves = 0;
        
        while(K>0){
            auto f = st.lower_bound({X,-1});
            if(f!=st.end()){

                long long district = (*f).first;
                long long capacity = (*f).second;

                if(capacity <= K){ // capacity <= people left
                    K-=capacity;
                    moves+= (district-X)*capacity;
                    st.erase(f);
                }
                else{ // capacity > people left
                    st.erase(f);
                    if(capacity-K > 0){
                        st.insert({district,capacity-K});
                    }
                    moves+= (district-X)*K;
                    K = 0;
                }
            }
            else{
                break;
            }
        }
        cout<<moves<<'\n';
    }

    return 0;
}