#include <bits/stdc++.h>

using namespace std;

void bfs(int v,vector<int> visited){
}

bool solution(vector<int> &P, vector<int> &T, vector<int> &A, vector<int> &B) {
    /*
    P = pets 
    T = toys
    A -> B = Connections

    */

    map<int,vector<int>> adjacency;
    map<int,pair<pair<int,int>,pair<int,int>>> freq;
    //int -> <dog, cat> , <dogToy, catToy>
    set<int> exists;

    for(int i = 0 ;i<A.size();++i){
        // if(exists.find(A[i])==exists.end()){
            adjacency[A[i]].push_back(B[i]);
            exists.insert(A[i]);
            exists.insert(B[i]);
        // }
    
    }

    for(auto p : adjacency){
        cout<<p.first<<" :  ";
        for(int n : p.second){
            cout<<n<<" ";
        }
        cout<<endl;
    }  

    return 1;

}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    vector<int> P = {2,2,1,1,1};
    vector<int> T = {1,1,1,2,2};
    vector<int> A = {0,1,2,3};
    vector<int> B = {1,2,0,4};

    solution(P,T,A,B);


    return 0;
}