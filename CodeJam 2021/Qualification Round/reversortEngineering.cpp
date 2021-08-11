#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> allPerms;
int reverSort(int n, vector<int>v){

    int ans = 0;

    for(int i = 0; i<n;i++){
        int min = INT_MAX;
        int pos = 0;
        for(int j = i;j<n;j++){
            if(v[j]<min){
                min= v[j];
                pos = j;
            }
        }

        reverse(v.begin()+i,v.begin()+pos+1);

        if(i==n-1){
            break;
        }
        ans+= pos-i+1;
    }
    return ans;

}

void heapPermutation(int a[], int size, int n)
{

    if (size == 1) {
        vector<int> perm(n);
        for(int i = 0; i<n;i++){
            perm[i] = a[i];
        }
        allPerms.push_back(perm);
        return;
    }
 
    for (int i = 0; i < size; i++) {
        heapPermutation(a, size - 1, n);
 
        if (size % 2 == 1)
            swap(a[0], a[size - 1]);
 
        else
            swap(a[i], a[size - 1]);
    }
}

void solve(){
    allPerms.clear();
    double n,c; cin>>n>>c;

    int maxCost = (n/2 * ((2*n)-n+1))-1;
    int minCost = n-1;
    if(c>maxCost || c < minCost){
        cout<<"IMPOSSIBLE\n";
        return;
    }
    vector<int> vec(n);
    for(int i = 0 ;i<n;i++){
        vec[i] =i+1;
    }
    int* arr = &vec[0];
    int nn = sizeof arr / sizeof arr[0];
    heapPermutation(arr,n,n);

    for(vector<int> perm :allPerms){
        int result = reverSort(n,perm);
        if(result == c){
            for(int n :perm){
                cout<<n<<" ";
            }
            cout<<"\n";
            return;
        }
    }
    cout<<"IMPOSSIBLE\n";



}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int T; cin>>T;
    int c = 1;
     while(T--){
         cout<<"Case #"<<c<<": ";
         solve();
         c++;
     }

     return 0;
}