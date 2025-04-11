#include <iostream>
#include <vector>
using namespace std;
void Alli(vector<int> &nums, int i, int key, int n)
{
    if (i == n)
        return;
    if (nums[i] == key){
        cout << i << " ";
    }
    Alli(nums,i+1,key,n);
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
    Alli(nums, 0, key, n);
}