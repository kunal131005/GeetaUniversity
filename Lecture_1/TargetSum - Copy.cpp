#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int l = 0, r = n - 1;
    // Binary Search  TC: O(nlogn)
    int count=0;
    for(int i=0;i<n;i++){
        int sum=target-num[i];
        if(sum==num[i]){
            count++;
        }
        else{
            sum=0;
        }
    }
    cout<<count;
    // Two Pointer TC: O(n)
    // int count = 0;
    // while (l < r)
    // {
    //     int sum = num[l] + num[r];
    //     if (sum == target)
    //     {
    //         count++;
    //         l++;
    //         r--;
    //     }
    //     else if (sum > target)
    //     {
    //         r--;
    //     }
    //     else
    //     {
    //         l++;
    //     }
    // }
    // cout << count;

    // Brute Force TC: O(n2)
    // int count = 0;
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i+1; j < n; j++)
    //     {
    //         if (num[i] + num[j] == target)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count;
}