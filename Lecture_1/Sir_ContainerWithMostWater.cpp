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
    int i = 0, j = height.size() - 1;
    int m_area = INT_MIN;
    while (i < j)
    {
        int area = (j - i) * min(height[i], height[j]);
        m_area = max(m_area, area);
        if (height[i] < height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << m_area;
}