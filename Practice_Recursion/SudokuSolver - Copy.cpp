#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool canPlace(vector<vector<int>>& mat,int n,int m,int i,int j,int num){
    for(int x=0;x<n;x++){
        // check in the row and the col if the number apppears
        if(mat[x][j]==num || mat[i][x]==num){
            return false;
        }
    }

    // check in the subgrid
    int rootn=sqrt(n);
    // for the starting index of the subgrids
    int sx=(i/rootn)*rootn;
    int sy=(j/rootn)*rootn;

    for(int x=sx;x<sx+rootn;x++){
        for(int y=sy;y<sy+rootn;y++){
            if(mat[x][y]==num){
                return false;
            }
        }
    }
    return true;
}
bool sudokuSolver(vector<vector<int>>& mat,int n,int m,int i,int j){
    // base case
    if(i==n){
        // print the matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    // case if row get end
    if(j==m){
        return sudokuSolver(mat,n,m,i+1,0);
    }
    // skip prefilled cells
    if(mat[i][j]!=0){
        return sudokuSolver(mat,n,m,i,j+1);
    }


    // recursive case
    
    // fill the current cell with the possible number
    for(int num=1;num<=9;num++){
        if(canPlace(mat,n,m,i,j,num)){
            mat[i][j]=num;
            bool couldWeSolve=sudokuSolver(mat,n,m,i,j+1);
            if(couldWeSolve){
                return true;
            }
        }
        // backtrack
        mat[i][j]=0;
    }

    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat;
    for(int i=0;i<n;i++){
        vector<int> temp(m);
        for(int j=0;j<m;j++){
            cin>>temp[j];
        }
        mat.push_back(temp);
    }
    sudokuSolver(mat,n,m,0,0); 
}