#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int>& nums,int i,vector<int> r,vector<int>& result){
    if(i==nums.size()){
        int sum=0;
        for(int ele:r){
            sum+=ele;
        }
        result.push_back(sum);
        return ;
    }

    r.push_back(nums[i]);
    subset(nums,i+1,r,result);
    r.pop_back();
    subset(nums,i+1,r,result);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> r;
    vector<int> result;
    subset(nums,0,r,result);

    sort(result.begin(),result.end());
    for(int ele:result){
        cout<<ele<<" ";
    }
}
