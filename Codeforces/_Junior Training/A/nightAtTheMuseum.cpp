#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s; cin>>s;
    int ans = 0;
    int i = 0;
    char cur = 'a';
    while(i!=s.size()){
        int curNum = (int)cur -96;
        int target = (int)s[i] - 96;
        int first = abs(target-curNum);
        int second = min(26-curNum +target,26-target + curNum);
        ans+= min(first,second);
        cur = s[i];
        i++;
    }
    cout<<ans;

    return 0;
}