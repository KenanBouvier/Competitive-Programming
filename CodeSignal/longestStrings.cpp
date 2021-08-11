#include <bits/stdc++.h>

using namespace std;

vector<string> allLongestStrings(vector<string> inputArray) {
    vector<int> sizes;
    int mx = 0;

    for(int i =0 ; i<inputArray.size();i++){
        if(inputArray[i].size()>mx){
            mx = inputArray[i].size();
        }
    }

    vector<string> ans;
    for(int i = 0; i<inputArray.size();i++){
        if(inputArray[i].size()==mx){
            ans.push_back(inputArray[i]);
        }
    }
    return ans;

}



int main(){
    vector<string> v = {"aba", "aa", "ad", "vcd", "aba"};
    allLongestStrings(v);


    return 0;
}