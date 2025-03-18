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

    bool AliceTurn=true;
    bool BobTurn=true;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        int size=nums.size();
        if(i%2==0){
            int min_A=INT_MAX;
            int index=-1;
            for(int j=0;j<size;j++){
                if(min_A>nums[j]){
                    min_A=nums[j];
                    index=j;
                }
            }
            nums.erase(nums.begin()+index);
            ans[i+1]=min_A;
        }
        else{
            int min_B=INT_MAX;
            int index=-1;
            for(int j=0;j<size;j++){
                if(min_B>nums[j]){
                    min_B=nums[j];
                    index=j;
                }
            }
            nums.erase(nums.begin()+index);
            ans[i-1]=min_B;
        }
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}