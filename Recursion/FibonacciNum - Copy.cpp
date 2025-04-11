#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1)return n;
    // fibo(n)==fibo(n-1)+fibo(n-2);
    return fibo(n-1)+fibo(n-2);
}
long long int tribo(int n){
    
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    // fibo(n)==fibo(n-1)+fibo(n-2);
    return tribo(n-1)+tribo(n-2)+tribo(n-3);
}
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<fibo(i)<<" ";
    // }
    cout<<fibo(n)<<endl;
    cout<<tribo(n)<<endl;
}