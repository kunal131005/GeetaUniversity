#include <iostream>
#include <vector>
using namespace std;
int Waysignoring1(vector<vector<int>> &num, int n, int m, int i, int j)
{
    if (i >= n || j >= m)
        return 0;   // i and j out of bound na chale jaye
    if (num[i][j] == 1)
        return 0;  //har element ko check karna ki 1 na ho
    if (i == n - 1 and j == m - 1)
        return 1;  // is baar hume end tak check karna hoga ki us path mein 1 to nhi hai 
    return Waysignoring1(num, n, m, i, j + 1) + Waysignoring1(num, n, m, i + 1, j);
}
// for 1 step down and 1 step right
int main()
{
    int n = 2, m = 2;
    vector<vector<int>> num = {{0, 1}, {0, 0}};
    cout << Waysignoring1(num, n, m, 0, 0);
}