#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int min_len = 0;
        int l = 0, r = 0;
        int sum = 0;
        while (r < n)
        {
            sum += nums[r];
            while (sum >= target)
            {
                min_len = min(min_len, r - l + 1);
                sum = sum - nums[l];
                l++;
            }
            r++;
        }
        return min_len;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    Solution solution;
    int result = solution.minSubArrayLen(target,nums);

    cout<<result<<endl;

    return 0;
}