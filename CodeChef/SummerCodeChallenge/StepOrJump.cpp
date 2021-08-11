#include <bits/stdc++.h>
using namespace std;

void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<bool>>& visited) {
    if (grid[row][col] == 0) return;
    if (visited[row][col]) return;
    visited[row][col] = true;
    int n = grid.size();

    if (row + 1 < n) {
        dfs(row + 1, col, grid, visited);
    }
    if (col + 1 < n && row + 1 < n) { //bottom right
        dfs(row + 1, col + 1, grid, visited) ;
    }
    if (col - 1 >= 0 && row + 1 < n) { //bottom left
        dfs(row + 1, col - 1, grid, visited) ;
    }

}

void solve() {
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n, 0));

    for (int i = 0 ; i < n; ++i) {
        for (int j = 0 ; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    if (grid[0][0] == 1) {
        cout << "No\n";
        return;
    }

    for (int i = 0 ; i < n; ++i) {
        for (int j = 0 ; j < n; ++j) {
            if (grid[i][j] == 0) continue;
            if (visited[i][j]) continue;
            grid[i][j] = 2;
            dfs(i, j, grid, visited);
        }
    }

    int row = n - 1;
    int col = 0;

    bool right = true;
    while (true) {
        if (row == 0 && col == 0) {
            cout << "Yes\n";
            return;
        }
        if (right) {
            if (col == n - 1) { //last element in row
                if (grid[row - 1][col] != 2) {
                    row--;
                }
                else {
                    if (grid[row - 1][col - 1] != 2) {
                        col--;
                        row--;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }
                right = false;

            }
            else if (col == n - 2) { // second last elem in row
                if (grid[row][col + 1] != 2) {
                    col++;
                }
                else {
                    if (grid[row - 1][col + 1] != 2) {
                        row--;
                        col++;
                        right = false;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }

            }
            else {
                if (grid[row][col + 1] != 2) {
                    col++;
                }
                else {
                    if (grid[row][col + 2] != 2) {
                        col += 2;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }
            }
        }
        else {
            if (col == 0) { //first element in row
                if (grid[row - 1][col] != 2) {
                    row--;
                }
                else {
                    if (grid[row - 1][col + 1] != 2) {
                        col++;
                        row--;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }
                right = true;

            }
            else if (col == 1) { // second elem in row
                if (grid[row][col - 1] != 2) {
                    col--;
                }
                else {
                    if (grid[row - 1][col - 1] != 2) {
                        row--;
                        col--;
                        right = true;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }

            }
            else {
                if (grid[row][col - 1] != 2) {
                    col--;
                }
                else {
                    if (grid[row][col - 2] != 2) {
                        col -= 2;
                    }
                    else {
                        cout << "No\n";
                        return;
                    }
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}