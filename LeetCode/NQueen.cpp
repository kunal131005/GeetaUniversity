#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool isSolve(vector<vector<char>> &board, int n, int i, int j)
    {
        for (int k = 0; k < n; k++)
        {
            if (board[i][k] == 'Q' || board[k][j] == 'Q')
            {
                return false;
            }
        }

        int x = i, y = j;
        while (x >= 0 && y < n)
        {
            if (board[x][y] == 'Q')
            {
                return false;
            }
            x--;
            y++;
        }

        int a = i, b = j;
        while (a >= 0 && b >= 0)
        {
            if (board[a][b] == 'Q')
            {
                return false;
            }
            a--;
            b--;
        }
        return true;
    }

    void nqueen(vector<vector<char>> &board, int n, int i, vector<vector<string>> &ans)
    {
        if (i == n)
        {
            vector<string> t;
            for (int k = 0; k < n; k++)
            {
                string temp;
                for (int l = 0; l < n; l++)
                {
                    temp += board[k][l];
                }
                t.push_back(temp);
            }
            ans.push_back(t);
            return;
        }

        for (int j = 0; j < n; j++)
        {
            if (isSolve(board, n, i, j))
            {
                board[i][j] = 'Q';
                nqueen(board, n, i + 1, ans);
                board[i][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<vector<char>> board(n, vector<char>(n, '.'));
        nqueen(board, n, 0, ans);
        return ans;
    }
};

int main()
{
    int n; // Number of queens to be put in a board of n*n
    cin >> n;
    Solution sol;
    vector<vector<string>> result = sol.solveNQueens(n);

    for (const auto &solution : result)
    {
        for (const auto &row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}