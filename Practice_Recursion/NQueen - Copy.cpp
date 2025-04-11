#include <iostream>
#include <vector>
using namespace std;
bool isSafeToPut(vector<vector<int>>& board,int i,int j,int n){
    // check in col if it is safe
    for(int k=0;k<n;k++){
        if(board[k][j]==1){
            return false;
        }
    }
    // check in row if it is safe
    for(int k=0;k<n;k++){
        if(board[i][k]==1){
            return false;
        }
    }

    // check in upper right diagonal
    int x=i,y=j;
    while(x>=0 and y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    // check in upper left diagonal
    int b=i,c=j;
    while(b>=0 and c>=0){
        if(board[b][c]==1){
            return false;
        }
        b--;
        c--;
    }

    return true;
}
bool NQueen(vector<vector<int>> &board, int n, int i)
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
        if(isSafeToPut(board,i,j,n)){
            board[i][j]=1;
            bool isRemainingSolved=NQueen(board,n,i+1);
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
    NQueen(board, n, 0);
}