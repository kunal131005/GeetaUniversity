#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // vector<int> vec(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> vec[i];
    // }
    // reverse(vec.begin(), vec.end());
    // for (int ele : vec)
    // {
    //     cout << ele << " ";
    // }
    vector<int> vec2={100,200,300,400,500};
    
    reverse(vec2.begin()+1, vec2.end()-1);  //[1,4)
    for (int ele : vec2)
    {
        cout << ele << " ";
    }
}