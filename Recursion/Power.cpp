#include<iostream>
using namespace std;
double power(double a,int n){
    // base case
    if(n==0)return 1;
    // recursive case;
    if(n<0){
        n=n*(-1);
        a=1/a;
    }
    double smallerans=power(a,n-1);
    double biggerans=a*smallerans;
    return biggerans;
}
int main(){
    double a=2;
    int n=-2;
    cout<<power(a,n)<<endl;
}