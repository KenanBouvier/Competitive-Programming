#include <bits/stdc++.h>
using namespace std;

vector<long long >isprime(10000000, true);
vector<long long >prime;
vector<long long >SPF(10000000);
  
void manipulated_seive(int N)
{
    isprime[0] = isprime[1] = false ;

    for (long long int i=2; i<N ; i++){
        if (isprime[i]){
            prime.push_back(i);
            SPF[i] = i;
        }

        for(long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}

void solve(int caseNum){
    long long z; cin>>z;
    manipulated_seive(z);

    long long ans = 0;
    for(int i = 1;i<prime.size();++i){
        long long res = prime[i]*prime[i-1];
        if(res>z){
            break;
        }
        else{
            ans = res;
        }
    }
    cout<<"Case #"<<caseNum<<": "<<ans<<'\n';
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin>>t;
    int caseNum = 1;
    while(t--){
        solve(caseNum);
        caseNum++;
    }
    return 0;
}