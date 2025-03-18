#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(vector<int>& nums,int start,int end){
    if(start>=end){
        return 0;
    }

    int totalsum=0;
    for(int i=start;i<=end;i++){
        totalsum+=nums[i];
    }
    int leftsum=0;
    for(int i=start;i<end;i++){
        leftsum+=nums[i];
        int rightsum=totalsum-leftsum;
        if(leftsum==rightsum){
            return 1+max(partition(nums,i+1,end),partition(nums,start,i));
        }
    }
    return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<partition(nums,0,n-1)<<endl;
	}
}