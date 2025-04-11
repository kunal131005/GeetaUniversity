#include<iostream>
using namespace std;
int fibo(int n){
    if(n==0 || n==1)return n;
    return fibo(n-1)+fibo(n-2);
}
// Time Complexity: (O(2^n))    jitni baar function apne aapko ko call karega
// Space Complexity: (O(n))   function call stack mein humesha n function hi honge pahle left left and jab yeh khatam ho jaye tab right right wale ko solve karo 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fibo(i)<<" ";
    }
}