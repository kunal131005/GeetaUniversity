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
    int top=0,bottom=r-1,left=0,right=c-1;
    while(left<=right and top<=bottom){
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }
    }
}