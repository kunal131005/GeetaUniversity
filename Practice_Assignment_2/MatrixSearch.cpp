#include <iostream>
#include <vector>
using namespace std;
bool search( vector<vector<int>>& mat,int t){
    int r=mat.size();
    int c=mat[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(t==mat[i][j]){
                return true;
            }
        }
    }
    return false;
}
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
    int target;
    cin >> target;
    cout<<search(matrix,target);
}