#include <iostream>
#include <string>
using namespace std;
int Ways(int n, int m, int i, int j, string path)
{
    if (i == n - 1 and j == m - 1)
    {
        cout << path << " ";
        return 1;
    }
    if (i >= n || j >= m)
        return 0;
    int v = Ways(n, m, i + 1, j, path + "V");
    int h = Ways(n, m, i, j + 1, path + "H");
    return v + h;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ways = Ways(n, m, 0, 0, "");
    cout << endl;
    cout << ways;
}