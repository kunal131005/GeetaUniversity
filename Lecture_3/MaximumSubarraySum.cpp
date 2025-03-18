#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
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
    int m_sum=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum=0;
    //         for (int k = i; k <= j; k++)
    //         {
    //          sum+=num[k];   
    //         }
    //         m_sum=max(m_sum,sum);   
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=num[j];
            m_sum=max(m_sum,sum);   
        }
    }
    cout<<m_sum;
}