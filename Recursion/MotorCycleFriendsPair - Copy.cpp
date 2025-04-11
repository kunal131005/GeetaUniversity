#include <iostream>
using namespace std;
int ways(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;
    // recursive case
    return ways(n - 1) + (n - 1) * ways(n - 2);
}
int main()
{
    int n;
    cin >> n;

    cout << ways(n);
}