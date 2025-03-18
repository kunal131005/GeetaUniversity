#include<iostream>
using namespace std;
void PrintIn(int n,int i){
    if(i==n+1)return;
    cout<<i<<" ";
    PrintIn(n,i+1);
}
int main(){
    int n;
    cin>>n;
    PrintIn(n,0);
}