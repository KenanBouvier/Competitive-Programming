#include <bits/stdc++.h>
using namespace std;

void solve(int caseNum){
    int n;
    cin>>n;
    vector<vector<int> > v(n,vector<int>(n,0));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n;j++){
            int a;cin>>a;
            v[i][j] = a;
        }
    }
    int diaganolSum = 0;
    bool foundRow = false, foundColumn = false;
    int row = 0,column = 0;
    for(int i =0 ;i<n; i++){
        diaganolSum+=v[i][i];
        set<int> rs,cs;
        for(int j = 0; j<n; j++){
            if(!foundRow){
                if(rs.find(v[i][j])!=rs.end()){
                row++; 
                foundRow = true;
                }
                else{
                    rs.insert(v[i][j]);
                }
            }
            if(!foundColumn){
                if(cs.find(v[j][i])!=cs.end()){
                    column++;
                    foundColumn = true;
                }
                else{
                    cs.insert(v[j][i]);
                }
            }
        }
        foundRow = false;
        foundColumn = false;
    }
    cout<<"Case #"<<caseNum<<": "<<diaganolSum<<" "<<row<<" "<<column<<"\n";

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    int total = t;

    while(t--){
        int caseNum = total-t;
        solve(caseNum);
    }

    return 0;
}