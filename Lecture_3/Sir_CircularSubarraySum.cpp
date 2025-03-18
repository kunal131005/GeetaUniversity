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
        int s_sum = 0, min_sum = num[0];
        int m_sum = 0, max_sum = num[0];
        for (int i = 0; i < n; i++)
        {
            s_sum = s_sum + num[i];
            min_sum = min(min_sum, s_sum);
            if (s_sum > 0)
            {
                s_sum = 0;
            }
            
            m_sum = m_sum + num[i];
            max_sum = max(max_sum, m_sum);
            if (m_sum < 0)
            {
                m_sum = 0;
            }
        }
        cout << min_sum << endl;
        cout << max_sum << endl;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += num[i];
        }
        if(sum-min_sum==0){
			cout<<max_sum<<endl;
		}
		else{
			cout<<max(max_sum,sum-min_sum)<<endl;
		}
    }
}