#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix;
    for (int i = 0; i < r; i++)
    {
        vector<int> temp(r);
        for (int j = 0; j < c; j++)
        {
            cin >> temp[j];
        }
        matrix.push_back(temp);
    }

    for (int i = 0; i < r; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < c; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
}