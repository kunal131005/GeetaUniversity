#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Matrix_Search(vector<vector<int>>& vec,int t){
    int r=vec.size();
    int c=vec[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(vec[i][j]==t){
                return 1;
            }
        }
    }
    return 0;
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
    cin>>target;
    Matrix_Search(mat,target);
}