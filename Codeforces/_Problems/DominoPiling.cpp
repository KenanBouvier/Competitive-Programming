#include <iostream>

using namespace std;

int q1(int w, int l){
    int ans;

    if(w%2 ==0){
        return w/2 * l;
    }
    else if (l%2== 0 ){
        return l/2 * w;
    }
    else{
        return q1(w,l-1)+(w-1)/2;
    }
}

int main (){
    int w,l;
    int ans;
    cin>>w;
    cin>>l;

    ans=q1(w, l);
    cout<<ans;
    return 0;
}


