#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int *p=upper_bound(arr,arr+n,key);
    // cout<<*p<<endl; //prints the upper bound of key value
    int index=p-arr;
    if(index<n){
        cout<<index<<endl;
    }
    else{
        cout<<"Not Present."<<endl;
    }
}