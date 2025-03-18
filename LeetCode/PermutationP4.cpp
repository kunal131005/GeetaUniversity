#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permu(vector<int> &nums, int i, int n)
{
    if (i == n)
    {
        for(int j=0;j<n;j++){
            cout<<nums[j]<<" ";
        }
        cout<<endl;
        return ;
    }

    for (int j = i; j < n; j++)
    {
        swap(nums[i], nums[j]);
        permu(nums, i + 1, n);
        swap(nums[i], nums[j]);
    }
}
void permute(int n, long long k)
{
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        nums[i] = i+1;
    }
    permu(nums,0,n);
    return ;
}
int main()
{
    int n;
    cin >> n;
    long long k;
    cin >> k;

    permute(n,k);
}