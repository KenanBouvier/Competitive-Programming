#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;

    vector<int> a(n),b(n);

    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<n;++i){
        cin>>b[i];
    }

    int left = INT_MIN;
    int right = INT_MAX;


    for(int i = 0;i<n;++i){
        left = max(left,a[i]);
        right = min(right,b[i]);
    }
    cout<< max(0,right-left+1);

	return 0;
}