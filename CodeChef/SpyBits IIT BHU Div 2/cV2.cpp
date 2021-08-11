#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    long long n; cin>>n;
    set<pair<long long,long long>> st;
    for(long long i = 0 ;i<n; ++i){
        long long a; cin>>a;
        st.insert({i+1,a});
    }

    int Q; cin>>Q;
    
    while(Q--){
        long long X,K; cin>>X>>K;
        long long moves = 0;
        
        while(K>0){
            auto f = st.lower_bound({X,-1});
            if(f!=st.end()){

                long long district = (*f).first;
                long long capacity = (*f).second;

                if(capacity <= K){ // capacity <= people left
                    moves+= (district-X)*capacity;
                    K-=capacity;
                    st.erase(f);
                }
                else{ // capacity > people left
                    moves+= (district-X)*K;
                    st.erase(f);
                    st.insert({district,capacity-K});
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