#include<iostream>
using namespace std;
int fact(int n){
    // 1. Base Case 
    // if(n==0)return 1;
    // 2. Recursive Relation
    // n!=n*(n-1)!
    // fact(n)=n*fact(n-1); //fact(n-1)
    // int smallerans=fact(n-1);
    // 3. Find the Solution
    // int biggerans=n*smallerans;
    // return biggerans;
    if(n==0)return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}