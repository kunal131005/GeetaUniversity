#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};
    // vector<vector<int>> matrix ={{7,8},{1,2}};
    int r = matrix.size();
    int c = matrix[0].size();
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> r_min;
    for(int i=0;i<r;i++){
        int row=INT_MAX;
        for(int j=0;j<c;j++){
            if (row > matrix[i][j])
            {
                row = matrix[i][j];
            }
        }
        r_min.push_back(row);
    }
    // for(int ele:r_min){
    //     cout<<ele<<" ";
    // }
    cout<<endl;
    vector<int> c_max;
    for(int i=0;i<c;i++){
        int col=INT_MIN;
        for(int j=0;j<r;j++){
            if (col < matrix[j][i])
            {
                col = matrix[j][i];
            }
        }
        c_max.push_back(col);
    }
    // for(int ele:c_max){
    //     cout<<ele<<" ";
    // }
    if(r_min.size()>c_max.size()){
        for(int i=0;i<r_min.size();i++){
            for(int j=0;j<c_max.size();j++){
                if(r_min[i]==c_max[j]){
                    cout<<r_min[i]<<endl;
                    break;
                }
            }
        }
    }
    else{
        for(int j=0;j<c_max.size();j++){
            for(int i=0;i<r_min.size();i++){
                if(r_min[i]==c_max[j]){
                    cout<<c_max[j]<<endl;
                    break;
                }
            }
        }
    }
}