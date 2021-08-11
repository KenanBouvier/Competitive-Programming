#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);
using namespace std;

bool ok(vector<int> one , vector<int> two){
    for(int i : one){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i : two){
        cout<<i<<" ";
    }
    cout<<endl;
        
    // 4 5 6
    // 1 2 3
    vector<int> tempOne = one;
    vector<int> tempTwo = two;
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());

    int oneMin,oneMax,twoMin,twoMax;

    if(tempOne[0]==tempOne[1]){
        return false;
    }
    if(tempOne[2]==tempOne[1]){
        return false;
    }
    if(tempTwo[0] == tempTwo[1]){
        return false;
    }
    if(tempTwo[2]==tempTwo[1]){
        return false;
    }

    twoMax = *min_element(one.begin(),one.end());
    oneMax = *max_element(one.begin(), one.end());
    cout<<oneMin<<" "<<oneMax<<endl;

    twoMin = *min_element(two.begin(),two.end());
    twoMax = *max_element(two.begin(), two.end());
    cout<<twoMin<<" "<<twoMax<<endl;
    cout<<endl;

    if((one[1]==oneMin || one[1] == oneMax) && (two[1] == twoMin || two[1] == twoMax)){
        return true;
    }
    return false;
    
}

int main(){
    fastio
    vector<int> one(3);
    vector<int> two(3);
    int a;
    for(int i = 0; i<3;i++){
        cin>>a;
        one[i] =a;
    }
    for(int i = 0; i<3;i++){
        cin>>a;
        two[i] = a;
    }

    for(int i = 0; i<3;i++){
        for(int j = 0 ;j<3;j++){
            cout<<i<<" "<<j<<endl;

            int oneVal = one[i];
            int twoVal = two[j];
            one[i] = twoVal;
            two[j] = oneVal;
            if( ok(one,two)){
                cout<<"Yes\n";
                return 0;
            }
            one[i] = oneVal;
            two[j] = twoVal;
        }
    }
    cout<<"No\n";

    return 0;
}