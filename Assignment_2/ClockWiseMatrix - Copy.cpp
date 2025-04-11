#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> mat;
    for (int i = 0; i < r; i++)
    {
        vector<int> v(c);
        for (int j = 0; j < c; j++)
        {
            cin >> v[j];
        }
        mat.push_back(v);
    }
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (left <= right and top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << mat[top][i] << ", ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << ", ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << ", ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << ", ";
            }
            left++;
        }
    }
    cout <<"END";
}