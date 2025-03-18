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
    int sum=0,m_sum=num[0];
    for(int i=0;i<n;i++){
        sum=sum+num[i];
        m_sum=max(m_sum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<m_sum;
}