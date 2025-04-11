#include<iostream>
#include<vector>
using namespace std;
void applyOperations(vector<int>& nums,int n) {
    for(int i=0;i<n;i++){
        int j=i+1;
        if(nums[i]==nums[j]){
            nums[i]=nums[i]*2;
            nums[j]=0;
        }
    }
    int i = 0, j = 0;
    while (j < n) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    applyOperations(nums,n);
    for(int ele:nums){
        cout<<ele<<" ";
    }
}