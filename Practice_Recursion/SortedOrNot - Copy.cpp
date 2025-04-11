#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>& nums,int i){
    if(i==0){
        return true;
    }

    if(nums[i]<nums[i-1]){
        return false;
    }
    return sorted(nums,i-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<sorted(nums,n-1);
}