#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int dp[2000];
void rsolve() {
  int n, k, p;
  cin >> n >> k >> p;
  memset(dp, -1, sizeof(dp)); //all values in dp[] become -1

  dp[0] = 0;

  while(n--) {
    vector<int> use;
    use.push_back(0);

    for(int i = 0; i < k; i++) { //loops through all values in one stack
      int x;
      cin >> x;
      use.push_back(use.back() + x); //cumulatively adds on to the array use  i.e   10 20 120 130
    }

    for(int j = p; j >= 0; j--) { //looping from plates available(p) to 0 
      for(int i = 1; i < use.size() && i <= j; i++) { 

        if(dp[j-i] < 0){
            continue;
        }

        dp[j] = max(dp[j], dp[j-i] + use[i]);

      }
    }
  }
  cout << dp[p] << "\n";
}






void solve() {
  int t;
  cin >> t;
  for(int casenum = 1; casenum <= t; casenum++) {
    cout << "Case #" << casenum << ": ";
    rsolve();
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  solve();
}