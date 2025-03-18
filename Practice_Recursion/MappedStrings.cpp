#include <iostream>
#include <string>
using namespace std;
void ways(string s, int i, string r)
{
    if (i == s.size())
    {
        cout << r << " ";
        return;
    }

    int f_digit = s[i] - '0';
    if (f_digit > 0)
    {
        char ch = 'A' + f_digit - 1;
        r.push_back(ch);
        ways(s, i + 1, r);
        r.pop_back();
    }

    if (i + 1 < s.size())
    {
        int s_digit = s[i + 1] - '0';
        int num = f_digit * 10 + s_digit;
        if (num <= 26 and f_digit > 0)
        {
            char ch = 'A' + num - 1;
            r.push_back(ch);
            ways(s, i + 2, r);
            r.pop_back();
        }
    }
}
int main()
{
    string s;
    cin >> s;
    ways(s, 0, "");
}