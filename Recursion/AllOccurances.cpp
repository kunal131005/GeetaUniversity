#include<iostream>
using namespace std;
void Alloccurances(int *a,int n,int i,int key){
    // base case
    if(i==n)return ;
    // recursive case
    if(a[i]==key){
        cout<<i<<" ";
    }
    Alloccurances(a,n,i+1,key);
}
int main(){
    int a[]={1,1,6,3,4,3,3,7};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    Alloccurances(a,n,0,key);
}