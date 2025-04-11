#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,2,-1}, {4,-1,6}, {7,8,9}};
    int r = matrix.size();
    int c = matrix[0].size();
    int sum = 0;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }
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
        for(int j=0;j<r;j++){
          if(matrix[j][i]==-1){
            matrix[j][i]=max;
          }
        }
    }
}