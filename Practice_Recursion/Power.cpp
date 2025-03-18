#include<iostream>
using namespace std;
int Power(int n,int x){
    if(x==0)return 1;
    return n*Power(n,x-1);
}
int main(){
    int n,x;
    cin>>n>>x;
    cout<<Power(n,x);
}