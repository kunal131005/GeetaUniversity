#include <iostream>
#include <set>
#include <string>
using namespace std;
void Upermu(string s, int i, set<string> &result)
{
    if (i == s.size())
    {
        result.insert(s);
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        Upermu(s, i + 1, result);
        swap(s[i], s[j]);
    }
}
int main()
{
    string s;
    cin >> s;
    set<string> result;
    Upermu(s, 0, result);

    for (auto it = result.begin(); it != result.end(); it++)
    {
        cout << *it << " ";
    }
}