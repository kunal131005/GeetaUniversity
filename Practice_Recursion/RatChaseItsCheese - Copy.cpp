#include<iostream>
#include<vector>
#include<string>
using namespace std;
void ways(vector<string>& pattern,int n,int m,int i,int j,vector<vector<int>>& visited,int& found){
    if(i>=n || j>=m || i<0 || j<0 || pattern[i][j]=='X' || visited[i][j]==1){
        return ;
    }

    if(i==n-1 and j==m-1){
        found=1;
        visited[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<visited[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }

    visited[i][j]=1;
    ways(pattern,n,m,i+1,j,visited,found);
    ways(pattern,n,m,i,j-1,visited,found);
    ways(pattern,n,m,i,j+1,visited,found);
    ways(pattern,n,m,i-1,j,visited,found);
    visited[i][j]=0;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> pattern;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        pattern.push_back(temp);
    }
    int found=0;
    vector<vector<int>> visited(n,vector<int>(m,0));
    ways(pattern,n,m,0,0,visited,found);
    if(!found){
        cout<<"NO PATH FOUND";
    }
}