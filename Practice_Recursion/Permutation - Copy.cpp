#include <iostream>
#include <vector>
using namespace std;
void permu(vector<int> &nums, int n, int i)
{
    if (i == n)
    {
        for (int ele : nums)
        {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    for (int j = i; j < n; j++)
    {
        swap(nums[i], nums[j]);
        permu(nums, n, i + 1);
        swap(nums[i], nums[j]);
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    permu(nums, n, 0);
}