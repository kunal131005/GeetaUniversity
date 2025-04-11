#include <iostream>
#include <vector>
#include<string>
using namespace std;
bool isSafeToPut(vector<vector<char>>& board,int i,int j,int n){
    // check in col if it is safe
    for(int k=0;k<n;k++){
        if(board[k][j]=='Q'){
            return false;
        }
    }
    // check in row if it is safe
    for(int k=0;k<n;k++){
        if(board[i][k]=='Q'){
            return false;
        }
    }

    // check in upper right diagonal
    int x=i,y=j;
    while(x>=0 and y<n){
        if(board[x][y]=='Q'){
            return false;
        }
        x--;
        y++;
    }

    // check in upper left diagonal
    int b=i,c=j;
    while(b>=0 and c>=0){
        if(board[b][c]=='Q'){
            return false;
        }
        b--;
        c--;
    }

    return true;
}
void NQueen(vector<vector<char>> &board, int n, int i)
{
    // base case
    if (i == n)
    {
        // print the board
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                cout << board[k][l]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return ;
    }

    // recursive case
    for(int j=0;j<n;j++){
        if(isSafeToPut(board,i,j,n)){
            board[i][j]='Q';
            NQueen(board,n,i+1);
            board[i][j]='.';
        }
    }
}
int main()
{
    int n; // no of queens to be put in a board of n*n
    cin >> n;
    vector<vector<char>> board(n,vector<char>(n,'.'));
    NQueen(board, n, 0);
}