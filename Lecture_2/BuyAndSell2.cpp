#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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
    // graph jahan uper ja raha hai wahan profit ho raha
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            sum = sum + num[i + 1] - num[i];
        }
    }
    cout << sum;
}