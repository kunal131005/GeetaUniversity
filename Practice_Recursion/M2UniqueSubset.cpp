#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
void subset(vector<int>& nums,int i,vector<int>& r,set<vector<int>>& ans){
    if(i==nums.size()){
        ans.insert(r);
        return ;
    }

    r.push_back(nums[i]);
    subset(nums,i+1,r,ans);
    r.pop_back();
    subset(nums,i+1,r,ans);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> r;
    set<vector<int>> ans;
    subset(nums,0,r,ans);
    for(const auto& sub:ans){
        for(int ele:sub){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}