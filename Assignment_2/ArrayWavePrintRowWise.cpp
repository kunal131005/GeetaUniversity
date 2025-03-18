#include <iostream>
#include <vector>
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
	for(int i=0;i<r;i++){
		if(i%2==0){
			for(int j=0;j<c;j++){
				cout<<mat[i][j]<<", ";
			}
		}
		else{
			for(int j=c-1;j>=0;j--){
				cout<<mat[i][j]<<", ";
			}
		}
	}
	cout<<"End";
}