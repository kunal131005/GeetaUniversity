#include <iostream>
using namespace std;
int tri(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * tri(n - 1);
}
int main()
{
    int n;
    cin >> n;

    cout << tri(n);
}