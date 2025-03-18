#include<iostream>
#include<vector>
using namespace std;
void eliminationGame(vector<int>& nums,int i){
    int n=nums.size();
    if(i==n|| i<0){
        return;
    }

    if(i==0){
        
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        nums[i]=i+1;
    }

    eliminationGame(nums,0);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}