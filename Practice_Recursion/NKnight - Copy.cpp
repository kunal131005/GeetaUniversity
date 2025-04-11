#include <iostream>
#include <vector>
using namespace std;
bool isSafeToPut(vector<vector<int>>& board,int i,int j,int n){
    if((i-2)>=0 and (i-2)<n and (j-1)>=0 and (j-1)<n and board[i-2][j-1]==1){
        return false;
    }
    if((i-1)>=0 and (i-1)<n and (j-2)>=0 and (j-2)<n and board[i-1][j-2]==1){
        return false;
    }
    if((i-1)>=0 and (i-1)<n and (j+2)>=0 and (j+2)<n and board[i-1][j+2]==1){
        return false;
    }
    if((i-2)>=0 and (i-2)<n and (j+1)>=0 and (j+1)<n and board[i-2][j+1]==1){
        return false;
    }
    return true;
}
bool NKnight(vector<vector<int>> &board, int n, int i)
{
    // base case
    if (i == n)
    {
        // print the board
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                cout << board[k][l];
            }
            cout<<endl;
        }
        return true;
    }

    // recursive case
    for(int j=0;j<n;j++){
        if(isSafeToPut(board,i,j+1,n)){
            board[i][j]=1;
            bool isRemainingSolved=NKnight(board,n,i+1);
            if(isRemainingSolved){
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}
int main()
{
    int n; // no of queens to be put in a board of n*n
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n, 0));
    NKnight(board, n, 0);
}