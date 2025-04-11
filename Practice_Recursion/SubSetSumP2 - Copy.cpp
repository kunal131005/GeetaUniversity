#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fun(vector<int>& nums,int n,int i,vector<int>& r,vector<vector<int>> &ans,int target){
    if(i<0){
        int sum=0;
        for(int ele:r){
            sum+=ele;
        }
        if(sum==target){
            ans.push_back(r);
        }
        return ;
    }

    r.push_back(nums[i]);
    fun(nums,n,i-1,r,ans,target);
    r.pop_back();
    fun(nums,n,i-1,r,ans,target);
}
bool compare(vector<int>& a,vector<int>& b){
    if(a.size()!=b.size()){
        return a.size()<b.size();
    }
    return a<b;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    vector<int> r;
    vector<vector<int>> ans;
    fun(nums,n,n-1,r,ans,target);
    sort(ans.begin(),ans.end(),compare);
    for(const auto& sub:ans){
        for(int ele:sub){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}