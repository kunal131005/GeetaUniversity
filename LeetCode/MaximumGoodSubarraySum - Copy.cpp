#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
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
    int k;
    cin >> k;
    int found = 0;
    long long max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            long long sum = 0;
            if (abs(nums[i] - nums[j]) == k)
            {
                for (int k = i; k <= j; k++)
                {
                    sum += nums[k];
                }
                max_sum = max(max_sum, sum);
                found = 1;
            }
        }
    }
    (found==1)?cout<<max_sum:cout << 1 ;
}