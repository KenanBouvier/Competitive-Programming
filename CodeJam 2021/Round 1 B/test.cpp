#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    int N,A,B; cin>>N>>A>>B; 
    // A , B = possible reductions for new material

    unordered_map<int,int> needed;

    for(int i = 1;i <N;++i){
        int a; cin>>a;
        needed[i] = a;
    }

    for(int y = 0; true; ++y){
        set<int> inventory;

        while(needed.size()>0){
            set<int> inventoryCopy = inventory;

            for(auto it = inventory.begin(); it!=inventory.end();++it){
                auto it2 = needed.find(*it);
                if(it2!=needed.end()){
                    needed.erase(it2);
                    inventoryCopy.erase(it); // remove from inventory maybe after
                }
            }

        }
    }
    

}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;
    int caseNum = 1;
    while(t--){
        set<int> inventory = {1,2,3,4,5,6};
        set<int> needed = {2,3,6};
        for(auto it = inventory.begin(); it!=inventory.end(); ++it){
            auto it2 = needed.find(*it);

            if(it2 != needed.end()){
                needed.erase(it2);
                inventory.erase(it);
                it--;
            }
        }

        for(int x :inventory){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x : needed){
            cout<<x<<" ";
        }
    }

	return 0;
}