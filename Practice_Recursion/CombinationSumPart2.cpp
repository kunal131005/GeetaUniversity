#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
void combinations(vector<int> &nums, int n, int i, vector<int> &r, int key, set<vector<int>> &ans)
{
    if (i == n and key == 0)
    {
        // ans.insert(r);
        for (int ele : r)
        {
            cout << ele << " ";
        }
        cout << endl;
        return;
    }

    if (i == n || key < 0)
    {
        return;
    }

    if (nums[i] <= key)
    {
        key = key - nums[i];
        r.push_back(nums[i]);
        combinations(nums, n, i + 1, r, key, ans);
        r.pop_back();
        key = key + nums[i];
    }
    int ind = i + 1;
    while (ind < n and nums[ind] == nums[ind - 1])
    {
        ind++;
    }
    if (ind < n)
        combinations(nums, n, i + 1, r, key, ans);
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
    sort(nums.begin(), nums.end());
    vector<int> r;
    set<vector<int>> ans;
    combinations(nums, n, 0, r, key, ans);
    // for (const auto &sum : ans)
    // {
    //     for (int ele : sum)
    //     {
    //         cout << ele << " ";
    //     }
    //     cout << endl;
    // }
}