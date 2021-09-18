#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& adjMatrix, unordered_set<int>& visited, int node) {
    for (int adj : adjMatrix[node]) {
        if (visited.find(adj) != visited.end()) return;

        visited.insert(adj);

        dfs(adjMatrix, visited, adj);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vector<vector<int>> adjMatrix(101);

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            bool b;
            cin >> b;
            if (b) {
                adjMatrix[i].push_back(j);
            }
        }
    }

    unordered_set<int> visited;

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        if (visited.find(i) == visited.end()) {
            ans++;
            dfs(adjMatrix, visited, i);
        }
    }
    cout << ans << endl;

    return 0;
}