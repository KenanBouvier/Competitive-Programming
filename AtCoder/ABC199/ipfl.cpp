#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    string s; cin>>s;
    int q; cin>>q;
    int flip = false;
    
    while(q--){
        int t,a,b; cin>>t>>a>>b;
        a--;
        b--;

        if(t==1){
            if(flip){
                if(a<n){
                    a = a+n;
                }
                else{
                    a = a-n;
                }

                if(b<n){
                    b = b+n;
                }
                else{
                    b = b-n;
                }
            }
            char temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }
        else{
            flip = !flip;
        }
    }
    if(flip){
        string str = s.substr(n,2*n);
        str+=s.substr(0,n);
        s= str;
    }
    cout<<s;

	return 0;
}