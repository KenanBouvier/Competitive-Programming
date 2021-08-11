#include <bits/stdc++.h>
using namespace std;

bool isSmallerOrEqual(string cur,string prev){
    if(cur.size()<prev.size()){
        return true;
    }
    if(cur.size()>prev.size()){
        return false;
    }
    for(int i = 0 ;i<cur.size();++i){
        if(cur[i]-'0'<prev[i]-'0'){
            return true;
        }
        else if(cur[i]-'0'>prev[i]-'0'){
            return false;
        }
        else{
            if(i==cur.size()-1){
                return true;
            }
        }
    }
    //cur<=prev
}
void solve(int caseNum){
    int n; cin>>n;
    vector<string> v(n);

    for(int i = 0; i<n;++i){
        cin>>v[i];
    }
    long long ans = 0;
    string prevStr = v[0];

    for(int i = 1 ;i<n; ++i){
        string curStr = v[i];

        if(isSmallerOrEqual(curStr,prevStr)){
            if(curStr[0]-'0' > prevStr[0]-'0'){
                ans += prevStr.size()-curStr.size();
                string res = curStr;
                for(int x = 0 ;x<prevStr.size()-curStr.size();x++){
                    res+='0';
                }
                // cur = stoi(res);
                curStr = res;
            }
            else if(curStr[0] == prevStr[0]){

                for(int index = 0; index<curStr.size();++index){
                    if(curStr[index]==prevStr[index]){
                        if(index==curStr.size()-1){
                            if(prevStr.size()==curStr.size()){
                                string res = curStr;
                                res+='0';
                                ans+=1;
                                curStr = res;
                                break;
                            }
                            else{
                                if(prevStr[prevStr.size()-1] -'0'== 9){
                                    ans+=prevStr.size()-curStr.size()+1;
                                    string res = curStr;
                                    for(int x = 0 ;x<prevStr.size()-curStr.size()+1;++x){
                                        res+='0';
                                    }
                                    curStr = res;
                                    break;
                                }
                                else{
                                    ans+=prevStr.size()-curStr.size();
                                    prevStr[prevStr.size()-1] = ((prevStr[prevStr.size()-1]-'0')+1)+'0';
                                    curStr = prevStr; 
                                    break;
                                }
                            }
                        }
                    }
                    else if(curStr[index]>prevStr[index]){
                        ans+=prevStr.size()-curStr.size();
                        string res = curStr;
                        for(int x = 0; x<prevStr.size()-curStr.size();++x ){
                            res+='0';
                        }
                        curStr = res;
                        break;
                    }
                    else{
                        ans+=prevStr.size()-curStr.size()+1;
                        string res = curStr;
                        for(int x = 0; x<prevStr.size()-curStr.size()+1;x++){
                            res+='0';
                        }
                        curStr = res;
                        break;
                    }
                }

            }
            else{
                ans+=prevStr.size()-curStr.size()+1;
                string res = curStr;
                for(int x = 0; x<prevStr.size()-curStr.size()+1;x++){
                    res+='0';
                }
                curStr = res;
            }
        }
        prevStr = curStr;
    }
    cout<<"Case #"<<caseNum<<": "<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;cin>>t;
    int caseNum = 1;
    while(t--){
        solve(caseNum);
        caseNum++;
    }
    return 0 ;
}