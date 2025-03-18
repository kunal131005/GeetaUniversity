#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Matrix_Search(vector<vector<int>>& vec,int t){
    int r=vec.size();
    int c=vec[0].size();
    int i = 0, j = c - 1;
    while (i < r and j >= 0)
    {
        if (vec[i][j] < t)
        {
            i++;
        }
        else if (vec[i][j] > t)
        {
            j--;
        }
        else{
            return true;
        }
    }
    return false;
}
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
    int target;
    cin >> target;
    cout<<Matrix_Search(mat,target);   
}