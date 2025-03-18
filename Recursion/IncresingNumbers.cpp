#include<iostream>
using namespace std;
// void Print(int n){
//     if(n==0)return;
//     Print(n-1);
//     cout<<n<<" ";
// }
void Print(int i,int n){
    if(i==n+1){
        return ;
    }
    cout<<i<<" ";
    Print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    Print(1,n);
}

