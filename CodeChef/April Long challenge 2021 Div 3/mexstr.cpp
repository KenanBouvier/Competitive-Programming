#include <bits/stdc++.h>
using namespace std;
bool isSubSequence(vector<char> str1, vector<char> str2, int m, int n)
{
    int j = 0; 
 
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
 
    return (j == m);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        string s; cin>>s;
        string ans;
        int index = 0;
        while(true){
            string x = bitset<16>(index).to_string();
            x.erase(0, min(x.find_first_not_of('0'), x.size()-1));

            vector<char> str1(x.begin(),x.end());
            vector<char> str2(s.begin(),s.end());

            if (!isSubSequence(str1,str2,str1.size(),str2.size())) {
                cout<<x<<"\n";
                break;
            }
            index++;
        }
    }

    return 0 ;
}