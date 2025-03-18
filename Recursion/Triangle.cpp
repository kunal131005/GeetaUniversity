#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int minsum(vector<vector<int>>& num, int n, int m, int i, int j) {
    if (i >= n || j >= m)
        return 1e9;
    if (i == n - 1 )
        return num[i][j];
    int sum1 = num[i][j] + minsum(num, n, m, i+1, j);
    int sum2 = num[i][j] + minsum(num, n, m, i + 1, j);
    return min(sum1, sum2);
}
int main()
{
    int n = 5, m =5;
    vector<vector<int>> num = {{1, 2, 0, 1, 1,}, {3, 4, 2, 7, 1}, {0, 1, 5, 6, 0}, {2, 6, 1, 9, 3}, {3, 6, 9, 5, 4}};
    cout << minsum(num, n, m, 0, 0);
}