#include <iostream>
#include <vector>
using namespace std;
void combination(vector<int> &nums, int n, int key, int i, vector<int> &r)
{
    if (i == n and key == 0)
    {
        for (int ele : r)
        {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    if (i == n || key < 0)
        return;
    if (nums[i] <= key)
    {
        key = key - nums[i];
        r.push_back(nums[i]);
        combination(nums, n, key, i, r);
        r.pop_back();
        key = key + nums[i];
    }
    combination(nums, n, key, i + 1, r);
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

    int key;
    cin >> key;
    vector<int> r;
    combination(nums, n, key, 0, r);
}