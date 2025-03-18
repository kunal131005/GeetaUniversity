#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> keys = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void key(string s, int i, string r)
{
    if (i == s.size())
    {
        cout << r << " ";
        return;
    }

    int digit = s[i] - '0';
    if (digit > 0)
    {
        for (int j = 0; j < keys[digit].size(); j++)
        {
            r.push_back(keys[digit][j]);
            key(s, i + 1, r);
            r.pop_back();
        }
    }
}
int main()
{
    string s;
    cin >> s;

    key(s, 0, "");
}