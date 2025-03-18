#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={10,20 ,30 ,40 ,40 ,40 ,40 ,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int *p=lower_bound(arr,arr+n,key);
    // cout<<*p<<endl; prints the value
    cout<<"The First Occurance of "<<key<<" is "<<p-arr<<endl;
    int *x=upper_bound(arr,arr+n,key);
    cout<<"The Last Occurance of "<<key<<" is "<<x-arr-1<<endl;
    cout<<"No of occurances of "<<key<<" is "<<x-p<<endl;
}