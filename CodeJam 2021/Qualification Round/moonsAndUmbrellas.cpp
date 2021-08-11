#include <bits/stdc++.h>
using namespace std;

void solve(){
   int x,y; cin>>x>>y; // X = CJ  Y = JC
   string s; cin>>s;
    int cost = 0;
    int prev= s[0];

   for(int i = 1;i<s.size();i++){
       if(s[i]=='?'){
           if(i==s.size()-1){
               continue;
           }
           if(s[i-1]=='?'){
               continue;
           }
           if(s[i+1]=='?'){
               continue;
           }
           int cCost = 0;
           int jCost = 0;
           if(s[i-1]=='J'){  //JC
               cCost+= y;
           } else{  // CJ
                jCost+=x;
           }

           if(s[i+1]=='J'){ //   CJ
               cCost+=x;
           }else{ //  JC
               jCost+=y;
           }
            if(cCost<jCost){
                s[i] = 'C';
                cost+=cCost;
            }
            else{
                s[i] = 'J';
                cost+=jCost;
            }
            i++;
       }
       else{
           if(prev=='C'&& s[i]=='J'){
               cost+=x;
           }
           else if(prev=='J'&& s[i]=='C'){
               cost+=y;
           }
       }
       prev= s[i];
   }
    cout<<cost<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int T; cin>>T;
    int c = 1;
     while(T--){
         cout<<"Case #"<<c<<": ";
         solve();
         c++;
     }

     return 0;
}