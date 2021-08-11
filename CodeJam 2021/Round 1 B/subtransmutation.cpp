#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    int N,A,B; cin>>N>>A>>B; 
    // A , B = possible reductions for new material

    unordered_map<int,int> neededOriginal;
    int mx = 0;
    for(int i = 1;i <=N;++i){
        int x; cin>>x;
        mx = max(x,mx);
        if(x!=0){
            neededOriginal[i] = x;
        }
    }

    for(int y = mx; true; ++y){

        if(y>100){
           cout<<"Case #"<<caseNum<<": IMPOSSIBLE"<<"\n";
           return;
        }

        multiset<int> inventory;
        unordered_map<int,int> needed = neededOriginal;
        
        inventory.insert(y);

        while(true){
            if(inventory.size()==0) break;
            //removing any matches
            multiset<int> toReplace;
            for(auto it = inventory.begin(); it!=inventory.end();++it){
                auto it2 = needed.find(*it);
                if(it2!=needed.end()){ // if item found in needed
                    if(needed[*it]==1){
                        needed.erase(it2);
                    }
                    else{
                        needed[*it]--;
                    }
                }
                else{
                    toReplace.insert(*it);
                }
            }
            inventory = toReplace;

            //splitting rest
            multiset<int> toAdd;
            for(auto it = inventory.begin(); it!=inventory.end();++it){
                if(*it-A>0){
                    toAdd.insert(*it-A);
                }
                if(*it-B>0){
                    toAdd.insert(*it-B);
                }
            }
            inventory = toAdd;

            if(needed.size()==0){
                cout<<"Case #"<<caseNum<<": "<<y<<"\n";
                return;
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;
    int caseNum = 1;
    while(t--){
        solve(caseNum);
        caseNum++;
    }

	return 0;
}