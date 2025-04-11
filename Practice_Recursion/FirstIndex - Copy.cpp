#include<iostream>
#include<vector>
using namespace std;
int Firsti(vector<int>& nums,int i,int n,int key){
    if(i==n)return -1;
    if(nums[i]==key)return i;
    return Firsti(nums,i+1,n,key);
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
    cout<<Firsti(nums,0,n,key);
}