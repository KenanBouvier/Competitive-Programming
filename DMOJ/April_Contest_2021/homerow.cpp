#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; cin>>s;
    string t; cin>>t;

    int correct = 0;
    int sz = min(s.size(),t.size());
    for(int i = 0 ;i<sz;++i){
        if(s[i]==t[i]){
            correct++;
        }
        else{
            break;
        }
    }
    cout<<(s.size()-correct)+(t.size()-correct)<<'\n';

	return 0;
}