#include <iostream>
#include <string>
using namespace std;
void RemoveHi(string s, int i)
{
    if (i == s.size())
    {
        cout << s << endl;
        return;
    }

    if (i + 1 < s.size() and s[i] == 'h' and s[i + 1] == 'i')
    {
        s.erase(i, 2);
        RemoveHi(s, i);
    }
    else
    {
        RemoveHi(s, i + 1);
    }
}
void ReplaceHi(string s, int i)
{
    if (i == s.size())
    {
        cout << s << endl;
        return;
    }

    if (i + 1 < s.size() and s[i] == 'h' and s[i + 1] == 'i')
    {
        s.replace(i, 2, "bye");
        ReplaceHi(s, i + 2);
    }
    else
    {
        ReplaceHi(s, i + 1);
    }
}
int CountHi(string s, int i)
{
    if (i == s.size())
    {
        return 0;
    }

    if (i + 1 < s.size() and s[i] == 'h' and s[i + 1] == 'i')
    {
        return 1 + CountHi(s, i + 2);
    }
    else
    {
        return CountHi(s, i + 1);
    }
}

int main()
{
    string s;
    cin >> s;

    RemoveHi(s, 0);
    ReplaceHi(s, 0);
    cout << CountHi(s, 0);
}