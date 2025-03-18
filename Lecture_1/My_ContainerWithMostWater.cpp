#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int max_area = INT_MIN;
    for (int i = 0; i < height.size() - 1; i++)
    {
        for (int j = 0; j < height.size(); j++)
        {
            int w = min(height[i], height[j]);
            int h = j - i;
            int area = w * h;
            // max_area=max(max_area,area);
            if (max_area < area)
            {
                max_area = area;
            }
        }
    }
    cout << max_area;
}