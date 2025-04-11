#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int l,r,n;
    cin>>l>>r>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int min_sum=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+nums[j];
            int len=j-i+1;
            if(len>=l and len<=r and sum>0){
                min_sum=min(min_sum,sum);
            }
        }
    }
    cout<<min_sum<<endl;
}