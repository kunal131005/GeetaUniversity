#include<iostream>
#include<vector>
#include<string>
using namespace std;
void ways(vector<vector<int>>& pattern,vector<vector<int>>& visited,int n,int i,int j,string r,bool& found){
    if(i>=n||j>=n||i<0||j<0||visited[i][j]==1||pattern[i][j]==0){
        return ;
    }
    if(i==n-1 and j==n-1){
        found=true;
        cout<<r<<" ";
        return ;
    }

    visited[i][j]=1;
    ways(pattern,visited,n,i+1,j,r+'D',found);
    ways(pattern,visited,n,i,j-1,r+'L',found);
    ways(pattern,visited,n,i,j+1,r+'R',found);
    ways(pattern,visited,n,i-1,j,r+'U',found);
    visited[i][j]=0;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> pattern;
    for(int i=0;i<n;i++){
        vector<int> temp(n);
        for(int j=0;j<n;j++){
            cin>>temp[j];
        }
        pattern.push_back(temp);
    }
    vector<vector<int>> visited(n,vector<int>(n,0));
    bool found=false;
    ways(pattern,visited,n,0,0,"",found);
    if(!found){
        cout<<"";
    }
}
