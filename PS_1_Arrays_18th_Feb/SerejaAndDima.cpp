#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int s_sum = 0, d_sum = 0;
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[l] >= nums[r])
        {
            if (i % 2 == 0)
            {
                s_sum += nums[l];
            }
            else
            {
                d_sum += nums[l];
            }
            l++;
        }
        else
        {
            if (i % 2 == 0)
            {
                s_sum += nums[r];
            }
            else
            {
                d_sum += nums[r];
            }
            r--;
        }
    }

    cout << s_sum << " " << d_sum << endl;
    return 0;
}