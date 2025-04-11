#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    bool present=binary_search(arr,arr+n,key);
    if(present){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Present."<<endl;
    }
}