#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int freq(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int f_Unique(string s, int k)
{
    int mxi = -1;
    int n = s.size();
    int i = 0, j = 0;
    vector<int> alpha(26, 0);
    while (j < n)
    {
        alpha[s[j] - 'a']++;
        while (freq(alpha) > k)
        {
            alpha[s[i] - 'a']--;
            i++;
        }
        if (freq(alpha) == k)
        {
            int len = j - i + 1;
            mxi = max(mxi, len);
        }
        j++;
    }
    return mxi;
}
int main()
{
    string s;
    cin >> s;
    int key;
    cin >> key;
    cout << f_Unique(s, key) << endl;
}