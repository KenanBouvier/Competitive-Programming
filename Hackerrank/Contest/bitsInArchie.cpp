#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'bitCount' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. INTEGER k
 */

long bitCount(vector<int> arr, int k) {
    long ans = 0;
    
    
    for(int i = 0; i<arr.size()-1;++i){

        for(int j = i+1;j<arr.size();j++){
            int setBits = 0;
            string f = bitset<10>(arr[i]).to_string();
            string s = bitset<10>(arr[j]).to_string();
            
            for(int k = 0 ;k<10;++k){                
                int orVal = ((int)f[k]-48)|((int)s[k]-48);
                if(orVal ==1){
                    setBits++;
                }
                int andVal = ((int)f[k]-48)&((int)s[k]-48);
                if(andVal ==1){
                    setBits++;
                }
            }
            if(setBits>=k){
                ans++;
            }    
        }
    }

    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    long result = bitCount(arr, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
