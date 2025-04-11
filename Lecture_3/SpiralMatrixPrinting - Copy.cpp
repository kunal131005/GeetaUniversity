#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<vector<int>> v3 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // cout << v3.size() << endl;    // rows
    // cout << v3[0].size() << endl; // cols
    int r = v3.size();
    int c = v3[0].size();
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (left <= right and top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << v3[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << v3[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << v3[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << v3[i][left] << " ";
            }
            left++;
        }
    }
}