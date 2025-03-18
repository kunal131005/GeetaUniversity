#include <iostream>
#include <string>
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
void subsequence(string s, int n, string r, int i, int j, int &count)
{
    if (i == n)
    {
        if (r.size() == 5)
        {
            if (isPalindrome(r))
            {
                count++;
            }
        }
        return;
    }

    subsequence(s, n, r, i + 1, j, count);
    r += s[i];
    subsequence(s, n, r, i + 1, j + 1, count);
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    subsequence(s, n, "", 0, 0, count);
    cout << count << endl;
}