#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int>& nums,int i,vector<int>& r,vector<vector<int>>& ans){
    if(i==nums.size()){
        ans.push_back(r);
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
    vector<vector<int>> ans;
    subset(nums,0,r,ans);
    sort(ans.begin(),ans.end());
    for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
}