#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r_num=0;
    while(n>0){
        int t=n%10;
        if(t==0){
            t=5;
        }
        r_num=r_num*10+t;
        n=n/10;
    }
    int r=0;
    while(r_num>0){
        r=r*10+(r_num%10);
        r_num=r_num/10;
    }
    cout<<r<<endl;
}