#include<iostream>
using namespace std;
int firstOccurance(int* a,int n,int key){
    // base case
    if(n==0)return -1;
    // recursive case
    if(a[0]==key)return 0;
    int i=firstOccurance(a+1,n-1,key);
    if(i==-1){
        // key is not found
        return -1;
    }
    return i+1;
}
int firstoccurancei(int *a,int n,int i,int key){
    // base case
    if(i==n)return -1;
    if(a[i]==key){
        return i;
    }
    return firstoccurancei(a,n,i+1,key);
}
int main(){
    int a[]={1,1,6,3,4,3,3,7};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<firstOccurance(a,n,key)<<endl;
    cout<<firstoccurancei(a,n,0,key)<<endl;
}