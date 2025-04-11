#include<iostream>
using namespace std;
int lastoccurancei(int *a,int n,int i,int key){
    // base case
    if(i==n)return -1;
    if(a[i]==key){
        int bi=lastoccurancei(a,n,i+1,key);
        if(bi!=-1){
            return bi;
        }
        return i;
    }
    int j=lastoccurancei(a,n,i+1,key);
    return j;
}
int main(){
    int a[]={1,1,6,3,4,3,3,7};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<lastoccurancei(a,n,0,key)<<endl;
}