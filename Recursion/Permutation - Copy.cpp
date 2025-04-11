#include <iostream>
#include <vector>
using namespace std;
void permutation(vector<vector<int>> &ans, vector<int> &r, vector<int> &num, int n, vector<int> &freq)
{
    // base case
    if (r.size() == n)
    {
        ans.push_back(r);
        return;
    }
    //  recursive case
    for (int k = 0; k < n; k++)
    {
        if (freq[k] == 1)
        {
            r.push_back(num[k]);
            freq[k] = 0;
            permutation(ans, r, num, n, freq);
            r.pop_back();
            freq[k] = 1;
        }
    }
}
int main()
{
    vector<int> num = {1,2,3,3};
    int n = num.size();
    vector<int> freq(n, 1);
    vector<vector<int>> ans;
    vector<int> r;
    permutation(ans, r, num, n, freq);
    int row = ans.size();
    int col = ans[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}