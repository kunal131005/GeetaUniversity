#include <iostream>
using namespace std;
int ways(int n)
{
    if (n <= 3){
        return 1;
    }
    return ways(n-1)+ways(n-4);
}
int main()
{
    int n = 5;
    cout << ways(n) << endl;
}
// given a wall of 4*n size tell the ways to arrange tiels of size 1*4 or 4*1