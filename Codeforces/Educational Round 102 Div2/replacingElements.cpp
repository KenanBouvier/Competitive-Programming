#include <bits/stdc++.h>
using namespace std;

pair<int,int> getMins(vector<int> v, int j ){
    int first = INT_MAX;
    int second = INT_MAX;

    for(int i = 0 ;i<v.size(); i++){
        if(i==j){
            continue;
        }

        if(v[i] < first){
            second = first;
            first = v[i];
        }
        else if (v[i] < second){
            second = v[i];
        }
    }
    return {first,second};
}

int solve(){
    int n,d;
    int firstMin = INT_MAX;
    int secondMin = INT_MAX;
    
    cin>>n>>d;
    vector<int> v(n);
    vector<pair<int,int> > mins(n);
    for(int i = 0; i<n ;i++){
        int a;
        cin>>a;
        v[i] = a;
    }

    for(int i = 0; i<n;i++){
        if(v[i]<=d){
            continue;
        }

        pair<int,int> mins = getMins(v,i);
        int firstMin = mins.first;
        int secondMin = mins.second;

        if(firstMin+secondMin>d){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 1;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        solve();
    }


    return 0;
}