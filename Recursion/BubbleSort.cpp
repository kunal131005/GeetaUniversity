#include<iostream>
using namespace std;
void BubbleSort(int* a,int n,int i){
    // base case
    if(i==n-1)return;
    // recursive case
    for(int j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    BubbleSort(a,n,i+1);
}
int main(){
    int a[]={5,4,3,2,1};
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    BubbleSort(a,n,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}