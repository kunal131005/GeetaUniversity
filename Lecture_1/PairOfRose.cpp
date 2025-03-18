#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> num(n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        sort(num.begin(), num.end());
        int l = 0, r = n - 1;
        vector<int> vec;
        int m_diff = INT_MAX;
        while (l < r)
        {
            int sum = num[l] + num[r];
            int diff = abs(num[l] - num[r]);
            if (sum == m)
            {
                if (diff < m_diff)
                {
                    m_diff = diff;
                    vec.clear();
                    vec.push_back(num[l]);
                    vec.push_back(num[r]);
                }
                else if (diff == m_diff)
                {
                    vec.push_back(num[l]);
                    vec.push_back(num[r]);
                }
                l++;
                r--;
            }
            else if (sum > m)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        cout << "Deepak should buy roses whose prices are " << vec[0] << " " << "and " << vec[1] << ".";
        cout << endl;
    }
}