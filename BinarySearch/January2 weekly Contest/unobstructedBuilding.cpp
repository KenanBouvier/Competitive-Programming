#include <bits/stdc++.h>
 
using namespace std;

vector<int> solve(vector<int>& heights) {
    vector<int> ans;
    int max = 0;
    for(int i = heights.size()-1; i>=0; i--){
        if(heights[i]>max){
            ans.push_back(i);
            max = heights[i];
        }
    }

    sort(ans.begin(),ans.end());
    return ans;
}



int main(){
    vector<int> v = {1,5,5,2,3};
    vector<int> ans;
    ans = solve(v);

    return 0;
}