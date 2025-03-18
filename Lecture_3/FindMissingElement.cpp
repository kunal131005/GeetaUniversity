#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void missingElement(vector<int> &v)
{
    bool flag = true;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        int j = i + 1;
        if (v[j] - v[i] != 1)
        {
            cout << v[i] + 1;
            flag = false;
        }
    }
    if (flag)
    {
        cout << v.size() + 1 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    // missingElement(num);
     // TC : O(nlogn);

     
    // TC : O(n) SC : O(n)
    // vector<int> temp(n+1,0);
    // for(int i=0;i<n;i++){
    //     temp[num[i]]=1;
    // }
    // for(int i=1;i<=temp.size();i++){
    //     if(temp[i]==0){
    //         cout<<i<<" ";
    //     }
    // }

    // TC : O(n) SC :
    // int sum=0;
    // for(int i=0;i<=numsSize;i++){
    //     sum=sum+i;
    // }
    // int r_sum=0;
    // for(int i=0;i<numsSize;i++){
    //     r_sum=r_sum+nums[i];
    // }
    // return sum-r_sum;

    // USing Bitwise Operator
    // sort(num.begin(),num.end());
    vector<int> temp;
    for(int i=0;i<=n;i++){
        temp.push_back(i);
    }
    int a=num[0]^temp[0];
    for(int i=1;i<n;i++){
        a^=num[i]^temp[i];
    }
    a^=temp[n];
    cout<<a;

    // for(int j=0;j<=n;j++){
    //     for(int i=0;i<n;i++){
    //         if(num[i]!=j){

    //         }
    //     }
    // }
}