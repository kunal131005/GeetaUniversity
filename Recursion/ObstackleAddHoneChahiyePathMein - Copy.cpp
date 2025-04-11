#include <iostream>
#include <vector>
using namespace std;
int Waysignoring1(vector<vector<int>> &num, int n, int m, int i, int j)
{
    if (i >= n || j >= m)
        return 0;
    if (num[i][j] == 1)
        return 1;
    if (i == n - 1 and j == m - 1)
        return 1;
    return Waysignoring1(num, n, m, i, j + 1) + Waysignoring1(num, n, m, i + 1, j);
}
// for 1 step down and 1 step right
// +Ways(n,m,i+1,j+1);  for digonally
int main()
{
    int n = 3, m = 4;
    vector<vector<int>> num = {{0, 0, 0, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}};
    cout << Waysignoring1(num, n, m, 0, 0);
}