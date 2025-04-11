#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans(n,0);
    sort(nums.begin(),nums.end());
    bool aliceturn=true;
    for(int i=0;i<n;i++){
      if(aliceturn){
        ans[i-1]=nums[i];
        nums[i]=INT_MAX;
        aliceturn=false;
      }
      else{
        ans[i+1]=nums[i];
        nums[i]=INT_MAX;
        aliceturn=false;
      }
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}