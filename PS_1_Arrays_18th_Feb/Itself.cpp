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
    vector<int> result(nums.size());
    int l_pro = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = l_pro;
        l_pro *= nums[i];
    }
    int r_pro = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        result[i] *= r_pro;
        r_pro *= nums[i];
    }
    for(int ele:result){
        cout<<ele<<" ";
    }
}
