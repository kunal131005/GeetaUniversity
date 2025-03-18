#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    vector<vector<int>> v2;
    vector<vector<int>> v3 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // cout << v3.size() << endl;    // rows
    // cout << v3[0].size() << endl; // cols
    int r = v3.size();
    int c = v3[0].size();
    for (int i = 0; i < r; i++)
    {
        if (i % 2 != 0)
        {
            reverse(v3[i].begin(), v3[i].end());
        }
        for (int j = 0; j < c; j++)
        {

            cout << v3[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
    for(int j=0;j<c;j++){
        if(j%2!=0){
            reverse(v3[j].begin(),v3[j].end());
        }
        for(int i=0;i<r;i++){
            cout<<v3[j][i]<<" ";
        }
        cout<<endl;
    }

}