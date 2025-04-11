#include<iostream>
using namespace std;
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void IntegerToString(int n){
    
    // base case
    if(n==0){
        return;
    }

    // recursive case;
    int digit=n%10;
    cout<<a[digit]<<" ";
    IntegerToString(n/10);
}
int main(){
    int n=7624;
    IntegerToString(n);
    cout<<endl;
}