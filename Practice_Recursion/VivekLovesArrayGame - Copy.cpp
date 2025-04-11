#include<iostream>
#include<vector>
using namespace std;
int split(vector<int>& nums,int start,int end){
    if(start>=end){
        return 0;
    }

    int totalsum=0;
    for(int i=start;i<=end;i++){
        totalsum+=nums[i];
    }

    int leftsum=0;
    for(int i=start;i<end;i++){
        leftsum+=nums[i];
        int rightsum=totalsum-leftsum;
        if(leftsum==rightsum){
            return 1+max(split(nums,start,i),split(nums,i+1,end));
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<split(nums,0,n-1);
}