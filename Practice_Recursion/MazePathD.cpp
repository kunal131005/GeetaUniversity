#include<iostream>
#include<vector>
#include<string>
using namespace std;
int ways(int n,int m,int i,int j,string r){
    if(i==n-1 and j==m-1){
        cout<<r<<" ";
        return 1;
    }

    if(i>n or j>m){
        return 0;
    }

    return ways(n,m,i+1,j,r+'V')+ways(n,m,i,j+1,r+'H')+ways(n,m,i+1,j+1,r+'D');
}
int main(){
    int n,m;
    cin>>n>>m;

    cout<<ways(n,m,0,0,"");
}