#include<iostream>
using namespace std;
// void waysprint(int n,int m,int i,int j){

// }
int Ways(int n ,int m,int i,int j){
    if(i==n-1)return 1;
    if(j==m-1)return 1;

    return Ways(n,m,i,j+1)+Ways(n,m,i+1,j); //for 1 step down and 1 step right
    // +Ways(n,m,i+1,j+1);  for digonally
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<Ways(n,m,0,0);
}