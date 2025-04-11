#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int s_sum=0,d_sum=0;
        for(int i=0;i<n;i++){
            int l=0,r=nums.size()-1;
            int m=max(nums[l],nums[r]);
            if(i%2==0){
                s_sum=s_sum+m;
            }
            else{
                d_sum=d_sum+m;
            }
            if(m==nums[l]){
                nums.erase(nums.begin()+l);
            }
            else{
                nums.erase(nums.begin()+r);
            }
        }
        cout<<s_sum<<" "<<d_sum<<endl;
}