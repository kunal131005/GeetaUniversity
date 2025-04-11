#include <iostream>
#include <vector>
using namespace std;
bool BinarySearch(vector<int> &nums, int n, int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (nums[mid] == key)
    {
        return true;
    }
    else if (nums[mid] > key)
    {
        return BinarySearch(nums,n,s,mid-1,key);
    }
    else
    {
        return BinarySearch(nums,n,mid+1,e,key);
    }
    return false;
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

    cout << BinarySearch(nums, n, 0, n - 1, key);
}