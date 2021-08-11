#include <bits/stdc++.h>

using namespace std;

int ans = INT_MIN;

void check(deque<int> dq,int k){
    if (k==-1 || dq.empty()){
        return;
    }
    if(k%2!=0){
        dq.pop_front();
        check(dq,k-1);
    }
    else{
        if(dq.front()>ans){
            ans = dq.front();
        }
        dq.pop_front();
        check(dq,k-1);
    }

}

void solve(){
    int n,k; cin>>n>>k;

    deque<int>dq;
    int mx = INT_MIN;
    for(int i = 0; i<n;i++){
        int a; cin>>a;
        if(a>mx){
            mx = a;
        }
        dq.push_back(a);
    }

    if(n==1){
        if(k%2 != 0){ 
            cout<<-1;
        }
        else{
            cout<<dq.front();
        }
        return;
    }

    if(k>n){
        cout<<mx;
        return;
    }

    

    check(dq,k);
    cout<<ans;
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    solve();

    return 0;
}