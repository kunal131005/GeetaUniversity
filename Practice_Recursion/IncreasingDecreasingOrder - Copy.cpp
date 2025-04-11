#include<iostream>
using namespace std;
void InOrder(int n,int i){
    if(i>n){
        cout<<endl;
        return;
    }

    cout<<i<<" ";
    InOrder(n,i+1);
}
void DecOrder(int n,int i){
    if(i<=0){
        return ;
    }
    cout<<i<<" ";
    DecOrder(n,i-1);
}
int main(){
    int n;
    cin>>n;

    InOrder(n,1);
    DecOrder(n,n);
}