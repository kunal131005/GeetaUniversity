#include <iostream>
#include <vector>
using namespace std;
int Ways(int n, int m, vector<int> &r)
{
    if (n == 0)
    {
        for (int ele : r)
        {
            cout << ele << " ";
        }
        cout << endl;
        return 1;
    }
    if (n < 0)
        return 0;

    int ans = 0;
    for (int j = 1; j <= m; j++)
    {
        r.push_back(j);
        ans += Ways(n - j, m, r);
        r.pop_back();
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> r;
    cout << Ways(n, m, r);
}