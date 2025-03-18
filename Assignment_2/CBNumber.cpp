#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cb(long long temp)
{
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    if (temp == 0 || temp == 1)
    {
        return false;
    }
    for (int ele : p)
    {
        if (temp == ele)
        {
            return true;
        }
    }
    for (int ele : p)
    {
        if (temp % ele == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int h;
    cin >> h;
    string str;
    cin >> str;
    int count = 0;
    vector<bool> visited(h, false);
    for (int i = 0; i < h; i++)
    {
        for (int j = i; j < h; j++)
        {
            long long x = 0;
            for (int k = i; k <= j; k++)
            {
                int t = str[k] - '0';
                x = x * 10 + t;
            }
            if (cb(x))
            {
                bool flag = true;
                for (int k = i; k <= j; k++)
                {
                    if (visited[k])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    count++;
                    for (int k = i; k <= j; k++)
                    {
                        visited[k] = true;
                    }
                }
            }
        }
    }
    cout << count << endl;
}