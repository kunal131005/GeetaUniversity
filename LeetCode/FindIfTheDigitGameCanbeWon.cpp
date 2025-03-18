#include<iostream>
#include<vector>
using namespace std;
void canAliceWin(vector<int>& nums) {
    int n=nums.size();
    int s_sum=0;
    int d_sum=0;
    for(int i=0;i<n;i++){
        // int temp=i;
        // int count=0;
        // while(temp>0){
        //     count++;
        //     temp=temp/10;
        // }
        // cout<<count<<endl;
        // if(count==1){
        //     s_sum+=i;
        // }
        // if(count==2){
        //     d_sum+=i;
        // }
        if(nums[i]<=9){
            s_sum+=nums[i];
        }
        else{
            d_sum+=nums[i];
        }
    }
    cout<<s_sum<<" "<<d_sum<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    canAliceWin(nums);
}