#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{7, 2, 1}, {6, 4, 2}, {6, 5, 3}, {3, 2, 1}};
    int r = matrix.size();
    int c = matrix[0].size();
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        int max = INT_MIN;
        for (int j = 0; j < r; j++)
        {
            if (max < matrix[j][i])
            {
                max = matrix[j][i];
            }
        }
        sum += max;
    }
    cout << sum;
}
// 15 ouput