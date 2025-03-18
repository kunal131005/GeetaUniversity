#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int minsum(vector<vector<int>> &num, int n, int m, int i, int j)
{
    if (j < 0)
        return 1e9;
    if (j >= m)
        return 1e9;
    if (i == n - 1)
        return num[n - 1][j];
    int sum1 = num[i][j] + minsum(num, n, m, i + 1, j);
    int sum2 = num[i][j] + minsum(num, n, m, i + 1, j + 1);
    int sum3 = num[i][j] + minsum(num, n, m, i + 1, j - 1);
    return min({sum1, sum2, sum3});
}
int main()
{
    vector<vector<int>> mat = {{2, 1, 3}, {6, 5, 4}, {7, 8, 9}};
    int n = mat.size();
    int m = n;
    int min_cost = INT_MAX;
    for (int j = 0; j < m; j++)
    {
        int x = minsum(mat, n, m, 0, j);
        min_cost = min(x, min_cost);
    }
    cout << min_cost << endl;
}