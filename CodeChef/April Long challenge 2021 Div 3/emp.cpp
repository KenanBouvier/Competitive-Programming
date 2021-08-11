#include <bits/stdc++.h>
using namespace std;

void solve(int Q, int D){

    long long u = 2e18;
    long long d = -2e18;
    long long r = 2e18;
    long long l = -2e18;

    u++;
    d--;
    r++;
    l--;

    long long yGuess;
    long long xGuess;

    bool xFound = false;
    bool yFound = false;

    while(Q--){

        if(!xFound){
            xGuess = (l+r)/2;
        }
        if(!yFound){
            yGuess = (u+d)/2;
        }
        //GUESS
        cout<<1<<" "<<xGuess<<" "<<yGuess<<endl;

        //RESPONSE
        string response;
        cin>>response;

        //ANALYSING
        if(response=="O"){
            return;
        }
        else if(response =="PY"){
            yFound = true;
            r = xGuess;
        }
        else if(response =="NY"){
            yFound = true;
            l = xGuess;
        }
        else if(response =="XP"){
            xFound = true;
            u = yGuess;
        }
        else if(response =="XN"){
            xFound = true;
            d = yGuess;
        }
        else if(response =="PP"){
            r = xGuess;
            u = yGuess;
        }
        else if(response =="PN"){
            r = xGuess;
            d = yGuess;
        }
        else if(response =="NP"){
            l = xGuess;
            u = yGuess;
        }
        else if(response =="NN"){
            l = xGuess;
            d = yGuess;
        }
        else{
            return;
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T,Q,D; cin>>T>>Q>>D;
    while(T--){
        solve(Q,D);
    }
    return 0 ;
}