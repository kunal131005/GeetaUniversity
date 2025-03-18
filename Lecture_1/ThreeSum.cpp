#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num.begin(),num.end());
    vector<vector<int>> result;
    for (int i = 0; i <= n - 3; i++)
    {
        if(num[0]>0)break; // if num[0] is positive than there is no triplets with sum 0
        if(i>0 and num[i]==num[i-1])continue;
        int target = num[i];
        int l = i+1, r = n - 1;
        while (l < r)
        {
            int sum = num[l] + num[r];
            if (sum == (-target))
            {
                result.push_back({num[i],num[l],num[r]});
                l++;
                r--;
                while(l<r and num[l]==num[l-1])l++;
                while(l<r and num[r]==num[r+1])r--;
            }
            else if (sum > target)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    int r=result.size();
    int c=result[0].size();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}