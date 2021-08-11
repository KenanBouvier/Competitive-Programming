#include <bits/stdc++.h>
using namespace std;

vector<string> palins;

void printAllKLengthRec(vector<char> set, string prefix, int n, int k) {

    // Base case: k is 0,
    // print prefix
    if (k == 0)
    {
        // cout << (prefix) << endl;
        palins.push_back(prefix);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        string newPrefix;

        // Next character of input added
        newPrefix = prefix + set[i];

        // k is decreased, because
        // we have added a new character
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }

}

// Driver Code
int main()
{

    cout << "First Test" << endl;
    vector<char> set1 = {'a', 'b', 'c', 'd'};
    int k = 3;
    printAllKLengthRec(set1, "", set1.size(), k);

}