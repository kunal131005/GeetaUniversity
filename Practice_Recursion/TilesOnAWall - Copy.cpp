#include<iostream>
using namespace std;
int Ctiles(int n){
    if(n<=3){
        return 1;
    }

    return Ctiles(n-1)+Ctiles(n-4);
}
int main(){
    int n;
    cin>>n;

    cout<<Ctiles(n);
}