#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int> v(n);

		multiset <int> left;
		multiset <int> right;

		for(int i= 0 ;i<n;++i){
            cin>>v[i];
            if(i==0){
                left.insert(v[i]);
            }
            else{
                right.insert(v[i]);
            }
        }

        bool found = false;
		int l,r;
		for(int i = 1;i<n;++i){
			for(int j = 0;true;++j){
				if(right.find(j)==right.end()){
					r = j;
					break;
				}
			}
			for(int j = 0;true;++j){
				if(left.find(j)==left.end()){
					l = j;
					break;
				}
			}
            // l = *lower_bound(left.begin(),left.end(),0);
            // r = *lower_bound(right.begin(),right.end(),0);
            
			if(l==r){
				cout<<i<<'\n';
                found = true;
				break;
			}
			left.insert(v[i]);
            auto remove = right.find(v[i]);
			right.erase(remove);
		}
        if(!found){
            cout<<-1<<'\n';
        }

	}

	return 0;
}