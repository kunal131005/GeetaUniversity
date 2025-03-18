#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int> nums={3,2,1};
    int n=nums.size();
    // int k;
    // cin>>k;
    long long max_sum=INT_MIN;
    vector<int> result;
    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            max_sum=max(max_sum,sum); 
        }
        result.push_back(max_sum);
    }
    for(int ele:result){
        cout<<ele<<" ";
    }
}