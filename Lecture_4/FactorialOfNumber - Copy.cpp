#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}
// Time Complexity: (O(n))
// Space Complexity: (O(n))
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}