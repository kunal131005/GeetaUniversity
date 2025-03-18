// Sample Input
// 1
// 7
// 8 -8 9 -9 10 -11 12
// Sample Output
// 22
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        int sum = 0, max_sum = num[0];
        for (int i = 0; i < n; i++)
        {
            sum += num[i];
            max_sum = max(max_sum, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        result.push_back(max_sum);
        reverse(num.begin(), num.end());
        reverse(num.begin(), num.begin() + 1);
        reverse(num.begin() + 1, num.end());
        // cout<<max_sum<<endl;
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,result[i]);
    }
    cout<<ans<<endl;
}