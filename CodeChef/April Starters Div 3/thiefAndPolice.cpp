#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t; cin>>t;

    while(t--){
        int n,m; cin>>n>>m;

        pair<int,int> thiefPos,policePos;
        cin>>thiefPos.first;
        cin>>thiefPos.second;
        cin>>policePos.first;
        cin>>policePos.second;
        // {x,y}

        int tSteps = n-thiefPos.first + m-thiefPos.second;
        int pSteps = n-policePos.first + m-policePos.second;
        // cout<<tSteps<<" : "<<pSteps<<endl;

        int timeToSame;
        bool policeBottomClosest;
        bool thiefBottomClosest;

        if(n-thiefPos.second<m-thiefPos.first){
            thiefBottomClosest = true;
        }
        else{
            thiefBottomClosest = false;
        }

        // hits bottom first
        if(n-policePos.second < m-policePos.first){
            pSteps -= n-policePos.second;
            policeBottomClosest = true;
        }
        //hits right first
        else{
            pSteps -= m-policePos.first;
            policeBottomClosest = false;
        }
        // cout<<tSteps<<" : "<<pSteps<<endl;
        if(pSteps<tSteps){
            cout<<"NO\n";
        }

        else if(pSteps>tSteps){
            cout<<"YES\n";
        }
        else{ // steps are the same
            if(m-policePos.first == n-policePos.second){
                cout<<"YES\n";
            }
            else{
                if((policeBottomClosest && thiefBottomClosest) || (!policeBottomClosest && !thiefBottomClosest)){
                    if(thiefPos.first == m || thiefPos.second ==n){
                        cout<<"NO\n";
                    }
                    else{
                        cout<<"YES\n";
                    }
                }
                else{
                    cout<<"YES\n";
                }
            }
        }
    }


	return 0;
}