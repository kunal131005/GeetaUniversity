#include <iostream>
#include <vector>
using namespace std;

// At leetcode!

// void combinations(vector<int>& nums,int i,int n,int target,vector<int>& r,vector<vector<int>>& result){
//     if(  i==n and target==0){
//         result.push_back(r);
//         return;
//     }

//     if(i==n || target<0){
//         return;
//     }
//     if(nums[i]<=target){
//         target-=nums[i];
//         r.push_back(nums[i]);
//         combinations(nums,i,n,target,r,result);
//         target+=nums[i];
//         r.pop_back();
//     }
//     combinations(nums,i+1,n,target,r,result);
// }
// vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//     int n=candidates.size();
//     vector<vector<int>> result;
//     vector<int> r;
//     combinations(candidates,0,n,target,r,result);
//     return result;
// }

void combinationSum(vector<int> &nums, int i, int n, int target, vector<int> &res)
{
    // base case
    if (i == n and target == 0)
    {
        for (int ele : res)
        {
            cout << ele << " ";
        }
        return;
    }
    if (i == n || target < 0)
        return;

    // recursive case
    if (nums[i] <= target)
    {
        target = target - nums[i];
        res.push_back(nums[i]);
        combinationSum(nums, i, n, target, res);
        target = target + nums[i];
        res.pop_back();
    }
    combinationSum(nums, i + 1, n, target, res);
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
    int t;
    cin >> t;

    vector<int> res;
    combinationSum(nums, 0, n, t, res);
    // cout << count << endl;
}