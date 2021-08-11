#include <bits/stdc++.h>


using namespace std;

int totalMoney(int n) {
    int daysPassed = 1;
    int startAdd = 1;
    int bank = 0;

    while(true){
        for(int i = startAdd ; i<startAdd+7; i++){
            bank+=i;
            if(daysPassed>=n){
                cout<<bank<<endl;
                return 0;
            }
            
            daysPassed++;
        }
        startAdd++;
    }
}

int main(){

    totalMoney(20);
    return 0;

}