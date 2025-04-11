#include<iostream>
#include<vector>
using namespace std;
int Lasti(vector<int>& nums,int i,int key){
    if(i<0)return -1;
    if(nums[i]==key)return i;
    return Lasti(nums,i-1,key);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int key;
    cin>>key;
    cout<<Lasti(nums,n-1,key);
}