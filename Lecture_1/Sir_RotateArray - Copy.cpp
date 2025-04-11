#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> num = {10, 20, 30, 40, 50, 60, 70};
    int k;
    cin >> k;
    // TC : O(n); just for one time
    // for (int i = num.size() - 1; i >= 1; i--)
    // {
    //     swap(num[i], num[i - 1]);
    // }

    // TC : O(kn): k times rotate
    // while (k--)
    // {
    //     for (int i = num.size() - 1; i >= 1; i--)
    //     {
    //         swap(num[i], num[i - 1]);
    //     }
    // }

    // TC :O(n); mein k times rotate
    k=k%num.size();  //to handel cases when k exeeced n
    // 1. reverse the num[0.....n-1]
    reverse(num.begin(),num.end()); //TC O(n/2)
    // 2. reverse the num[0...k-1]
    reverse(num.begin(),num.begin()+k); // TC O(k/2)
    // 3. reverse the num[k...n-1]
    reverse(num.begin()+k,num.end()); // TC O((n-k)/2)
    for (int ele : num)
    {
        cout << ele << " ";
    }
}