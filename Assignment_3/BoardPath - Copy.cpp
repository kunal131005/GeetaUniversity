#include <iostream>
#include <vector>
using namespace std;
int Stairs(int n, int m)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += Stairs(n - i, m);
    }
    return ans;
}
void NStairs(int n, int m, vector<int> &r)
{
    if (n == 0)
    {
        for (int ele : r)
        {
            cout << ele;
        }
        cout << " ";
        return;
    }
    if (n < 0)
        return;

    for (int i = 1; i <= m; i++)
    {
        r.push_back(i);
        NStairs(n - i, m, r);
        r.pop_back();
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> r;
    NStairs(n, m, r);
    cout << endl
         << Stairs(n, m) << endl;
}