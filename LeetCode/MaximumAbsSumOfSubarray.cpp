#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums={1,-3,2,3,-4};
    int n=nums.size();
    // int max_sum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum=sum+nums[j];
    //         cout<<sum<<" "<<max_sum<<endl;
    //         max_sum=max(max_sum,abs(sum));
    //     }
    // }
    sort(nums.begin(),nums.end());
    int sum=0,max_sum=nums[0];
    for(int i=1;i<n;i++){
        sum+=nums[i];
        max_sum=max(max_sum,abs(sum));
        if(sum<0){
            sum=0;
        }
    }
    cout<<max_sum;
}