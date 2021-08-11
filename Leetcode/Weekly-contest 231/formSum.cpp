#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> nums = {1,23,6,43,-23};
    long long int limit = 23;
    long long int goal = 1324125;

    long long int sum = accumulate(nums.begin(),nums.end(),0);

    long long int ans = abs(sum-goal)/limit;

    if(abs(sum-goal)%limit!=0){
        ans++;
    }
    cout<< ans;

    return 0;
}