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
            int m_sum = 0, max_sum = num[0];
            for (int i = 0; i < n; i++)
            {
                m_sum = m_sum + num[i];
                max_sum = max(m_sum, max_sum);
                if (m_sum < 0)
                {
                    m_sum = 0;
                }
            }
            result.push_back(max_sum);
            for (int i = num.size() - 1; i >= 1; i--)
            {
                swap(num[i], num[i - 1]);
            }
        }
        int m = INT_MIN;
        for (int i = 0; i < result.size(); i++)
        {
            if (m < result[i])
            {
                m = result[i];
            }
        }
        cout << m << endl;
    }
}