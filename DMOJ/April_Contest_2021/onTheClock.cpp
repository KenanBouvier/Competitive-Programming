#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    double n,m; cin>>n>>m;
    double gradient = n/m;

    vector<pair<int,int>> ans;

    for(double i = 0;i<n;++i){
        for(double j = 0;j<m;++j){
            // {x,y}
            pair<double,double> topLeft = {j,i+1};
            pair<double,double> bottomRight = {j+1,i};

            bool leftUp = false;
            bool rightDown = false; 

            double yVal = gradient*topLeft.first;
            double xVal = gradient*bottomRight.first;

            if(topLeft.second > yVal){
                leftUp = true;
            }
            else{
                break;
            }
            if(bottomRight.second < xVal){
                rightDown = true;
            }
            if(leftUp && rightDown){
                ans.push_back({i+1,j+1});
            }
            
        }
    }

    sort(ans.begin(),ans.end());
    cout<<ans.size()<<'\n';
    for(auto p :ans){
        cout<<p.first<<" "<<p.second<<'\n';
    }

    return 0;
}