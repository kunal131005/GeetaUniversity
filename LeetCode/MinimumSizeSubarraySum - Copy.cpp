#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    int min_len = INT_MAX;
    for (int i = 0; i < n; i++){
        // if(nums[i]==target){
        //     cout<<1<<endl;
        //     break;
        // }
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=nums[k];
            }
            if(sum==target){
                min_len=min(min_len,j-i);
            }
        }
    }
    cout<<abs(min_len)<<endl;
}