#include <iostream>
#include <vector>
#include <algorithm>
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
    reverse(matrix.begin(),matrix.end());
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}