#include<bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>> & board, int row, int col, int N)
{
    for (int i = 0; i < col; ++i)
        if (board[row][i])
            return false;

    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
        if (board[i][j])
            return false;

    for (int i = row, j = col; i < N && j >= 0; ++i, --j)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQueensUtil(vector<vector<int>>& board, int col, int N)
{
    if (col == N)
    {
        for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < N; ++j)
                cout << board[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col, N))
        {
            board[i][col] = 1;

            res = solveNQueensUtil(board, col + 1, N) || res;

            board[i][col] = 0;
        }
    }

    return res;
}

void solveNQueens(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQueensUtil(board, 0, N))
        cout << "Solution does not exist" << endl;
}

int main() {
    int N;
    cout << "Enter the size of the chessboard (N): ";
    cin >> N;

    solveNQueens(N);

    return 0;
}

