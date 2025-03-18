#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void subsequence(string s, int n, string r, int i, int j, int &max_len)
{
    if (i == n)
    {
        if (isPalindrome(r))
        {
            int len=r.size();
            max_len=max(max_len,len);
        }
        return;
    }

    subsequence(s, n, r, i + 1, j, max_len);
    r += s[i];
    subsequence(s, n, r, i + 1, j + 1, max_len);
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int max_len=1;
    subsequence(s, n, "", 0, 0, max_len);
    cout << max_len << endl;
}