#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
void Usubseq(string s, int i, string r, set<string> &result)
{
    if (i == s.size())
    {
        result.insert(r);
        return;
    }

    Usubseq(s, i + 1, r, result);
    r.push_back(s[i]);
    Usubseq(s, i + 1, r, result);
}
int main()
{
    string s;
    cin >> s;

    // sort(s.begin(), s.end());
    set<string> result;
    Usubseq(s, 0, "", result);

    for (const string &subseq : result)
    {
        cout << subseq << " ";
    }
}