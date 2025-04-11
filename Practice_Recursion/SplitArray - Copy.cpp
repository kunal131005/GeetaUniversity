#include <iostream>
#include <vector>
using namespace std;
void ways(vector<int> &nums, int n, int i, vector<int> &grp1, vector<int> &grp2, int &count)
{
    if (i >= n)
    {
        int sum1 = 0, sum2 = 0;
        for (int ele : grp1)
        {
            sum1 += ele;
        }
        for (int ele : grp2)
        {
            sum2 += ele;
        }
        if (sum1 == sum2)
        {
            count++;
            for (int ele : grp1)
            {
                cout << ele << " ";
            }
            cout << "and ";
            for (int ele : grp2)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
        return;
    }

    grp1.push_back(nums[i]);
    ways(nums, n, i + 1, grp1, grp2, count);
    grp1.pop_back();
    grp2.push_back(nums[i]);
    ways(nums, n, i + 1, grp1, grp2, count);
    grp2.pop_back();
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
    vector<int> grp1;
    vector<int> grp2;
    int count = 0;
    ways(nums, n, 0, grp1, grp2, count);
    cout << count << endl;
}