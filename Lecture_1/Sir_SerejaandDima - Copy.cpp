#include <bits/stdc++.h>
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
    int s_sum = 0, d_sum = 0;
    bool serejaTurn = true;
    int l = 0, r = n - 1;
    while(l<=r){
        if (serejaTurn)
        {
            if (num[l] > num[r])
            {
                s_sum += num[l];
                l++;
            }
            else
            {
                s_sum += num[r];
                r--;
            }
            serejaTurn = false;
        }
        else
        {
            if (num[l] > num[r])
            {
                d_sum += num[l];
                l++;
            }
            else
            {
                d_sum += num[r];
                r--;
            }
            serejaTurn = true;
        }
    }
    cout<<s_sum<<" "<<d_sum;
}
