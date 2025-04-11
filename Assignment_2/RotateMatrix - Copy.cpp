#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<vector<int>> rotate;
    // for(int j=0;j<c;j++){
    //     vector<int> v(c);
    //     for(int i=0;i<r;i++){
    //         v.push_back(mat[i][j]);
    //     }
    //     reverse(v.begin(),v.end());
    //     rotate.push_back(v);
    // }
    reverse(mat.begin(),mat.end());
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<rotate[i][j]<<" ";
        }
        cout<<endl;
    }
}