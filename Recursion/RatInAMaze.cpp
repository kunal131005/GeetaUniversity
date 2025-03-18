#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(const vector<string> &num)
{
    for (const string &row : num)
    {
        for (char cell : row)
        {
            if (cell == 'X' || cell == 'O')
            {
                cout << '0' << " ";
            }
            else
            {
                cout << cell << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
void Waysignoring1(vector<int> &r, vector<string> &num, int n, int m, int i, int j)
{
    if (i >= n || j >= m || i < 0 || j < 0 || num[i][j] == '1' || num[i][j] == 'X')
    {
        return;
    }
    if (i == n - 1 and j == m - 1)
    {
        num[i][j] = '1';
        print(num);
        num[i][j] = 'O';
        return;
    }
    num[i][j] = '1';
    Waysignoring1(r, num, n, m, i, j + 1);
    Waysignoring1(r, num, n, m, i + 1, j);
    Waysignoring1(r, num, n, m, i, j - 1);
    Waysignoring1(r, num, n, m, i - 1, j);
    num[i][j] = 'O';
}
int main()
{
    int n = 5, m = 4;

    vector<string> num = {"OXOO", "OOOX", "XOXO", "XOOX", "XXOO"};
    vector<int> r;
    Waysignoring1(r, num, n, m, 0, 0);
}