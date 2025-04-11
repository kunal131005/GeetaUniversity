#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int l = n - 2, r = n - 1, k = 1;
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        if (num[l] < num[r])
        {
            swap(num[l], num[r]);
        }
        else
        {
            reverse(num.begin(), num.end());
            reverse(num.begin(), num.begin() + k);
            reverse(num.begin() + k, num.end());
            k++;
        }
        for (int ele : num)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}