#include <iostream>
#include <vector>
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
    vector<vector<int>> result;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = i; j < n; j++)
        {
            temp.push_back(num[j]);
            // for specific length of subarrays
            // if((j-i+1)==3){
            //     result.push_back(temp);
            // }
            
            result.push_back(temp);
        }
    }
    for (const auto& subarray : result) {
        for (int ele : subarray) {
            cout << ele << " ";
        }
        cout << endl;
    }
}