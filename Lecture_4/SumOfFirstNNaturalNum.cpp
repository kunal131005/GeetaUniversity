#include<iostream>
using namespace std;
int Sum(int i,int n){
    if(i==n+1)return 0;
    return i+Sum(i+1,n);
}
// Time Complexity: (O(n))
// Space Complexity: (O(n))
int main(){
    int n;
    cin>>n;
    cout<<Sum(1,n);
}