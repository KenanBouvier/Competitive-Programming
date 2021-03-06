#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// 3 5 -7 8 10
// 
// 13


// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
    int ans = 0;
    vector<int> dp(arr.size());
    
    dp[0] = arr[0];
    dp[1] = arr[1];
    
    for(int i = 2; i<arr.size();i++){
        int a,b =0;
        if(i>=2){
            a = arr[i] + dp[i-2];
        }
        if(i>=3){
            b = arr[i]+ dp[i-3];
        }

        int res = max(a,b);
        if(res >arr[i]){
            dp[i]=res;
            if(dp[i]>ans){
                ans = dp[i];
            }
        }
    }
    for(int val : dp){
        cout<<val<<" ";
    }
    cout<<ans;
    
    return ans;
}



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
