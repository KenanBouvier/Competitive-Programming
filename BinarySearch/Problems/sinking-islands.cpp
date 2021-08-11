#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>>&);

int main() {
    vector<vector<int>> v = {
        {0, 0, 0, 0, 1, 0, 1, 1, 1, 1},
        {1, 1, 0, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 0, 1, 1, 1, 1, 1, 0},
        {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
        {1, 0, 1, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0, 0, 1, 1},
        {0, 1, 1, 0, 1, 0, 1, 0, 1, 1},
        {1, 0, 1, 0, 1, 1, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 0, 1, 1, 1, 0, 0}
    };


    vector<vector<int>> ans = solve(v);

    for (vector<int> vec : ans) {
        for (int x : vec) {
            cout << x << " ";
        }
        cout << '\n';
    }
    return 0;
}

vector<vector<int>> solve(vector<vector<int>>& board) {
    vector<vector<pair<int, int>>> islands;
    vector<vector<int>> copy = board;
    int rowSize = board.size();
    int colSize = board[0].size();
    vector<vector<bool>> visited(rowSize, vector<bool>(colSize, false));

    for (int i = 0; i < rowSize; ++i) {
        for (int j = 0 ; j < colSize; ++j) {
            if (board[i][j] == 0) continue;
            bool possible = true;
            queue<pair<int, int>> q;
            q.push({i, j});
            vector<pair<int, int>> soFar;
            while (!q.empty()) {
                pair<int, int> f = q.front();
                q.pop();
                int r = f.first;
                int c = f.second;
                if (visited[r][c]) continue;
                visited[r][c] = true;

                if (r == rowSize - 1 || r == 0 || c == 0 || c == colSize - 1) {
                    possible = false;
                }

                soFar.push_back({r, c});

                if (r - 1 >= 0 && board[r - 1][c] == 1) {
                    q.push({r - 1, c});
                }
                if (r + 1 < rowSize && board[r + 1][c] == 1) {
                    q.push({r + 1, c});
                }
                if (c - 1 >= 0 && board[r][c - 1] == 1) {
                    q.push({r, c - 1});
                }
                if (c + 1 < colSize && board[r][c + 1] == 1) {
                    q.push({r, c + 1});
                }

            }

            if (possible) {
                for (pair<int, int> p : soFar) {
                    copy[p.first][p.second] = 0;
                }
            }

        }
    }
    return copy;
}