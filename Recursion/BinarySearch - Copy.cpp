#include<iostream>
using namespace std;
int BinarySearch(int* a,int s,int e,int key){
    // base case
    if(s>e)return -1;
    // recursive case
    int m=(s+e)/2;
    if(a[m]==key){
        return m;
    }
    else if(a[m]>key){
        return BinarySearch(a,s,m-1,key);
    }
    else{
        return BinarySearch(a,m+1,e,key);
    }
    return -1;
}
int main(){
    int a[]={1,4,7,8,10,12};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int ans=BinarySearch(a,0,n-1,key);
    cout<<ans<<endl;
}