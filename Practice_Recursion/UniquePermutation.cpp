#include<iostream>
#include<vector>
#include<set>
using namespace std;
void Upermu(vector<int>& nums,int n,int i,set<vector<int>>& result){
    if(i==n){
        result.insert(nums);
        return ;
    }

    for(int j=i;j<n;j++){
        swap(nums[i],nums[j]);
        Upermu(nums,n,i+1,result);
        swap(nums[i],nums[j]);
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    set<vector<int>> result;
    Upermu(nums,n,0,result);

    for(const auto& permu:result){
        for(int ele:permu){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}