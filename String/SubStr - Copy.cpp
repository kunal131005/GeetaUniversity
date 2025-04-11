#include <iostream>
#include <vector>
#include <string>
#include<climits>
using namespace std;
bool isUnique(string s)
{
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
        if (freq[ch - 'a'] > 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    int max_len=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        string temp = "";
        for (int len = 1; len <= n - i; len++)
        {
            temp = s.substr(i, len);
            cout<<temp<<" ";
            if (isUnique(temp))
            {
                int len=temp.size();
                max_len=max(max_len,len);
            }
        }
    }
    cout << max_len << endl;

    return 0;
}
