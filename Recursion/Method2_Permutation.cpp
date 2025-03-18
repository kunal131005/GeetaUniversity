#include <iostream>
#include <vector>
using namespace std;
void permutation(vector<int> &num, vector<vector<int>> &result, int index, int n)
{
    if (index == n)
    {
        result.push_back(num);
        return;
    }
    
    for (int i = index; i < n; i++)
    {
        swap(num[index], num[i]);
        permutation(num, result, index+1, n);
        swap(num[index], num[i]);
    }
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result;
    int n = nums.size();
    int index = 0;
    permutation(nums, result, index, n);
    int row = result.size();
    int col = result[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}