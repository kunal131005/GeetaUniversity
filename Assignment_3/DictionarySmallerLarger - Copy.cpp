#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void permutation(string &s, int index, vector<string> &result, string temp)
{
    if (index == s.size())
    {
        if (s < temp)
        {
            result.push_back(s);
        }
        return;
    }

    for (int i = index; i < s.size(); i++)
    {
        swap(s[index], s[i]);
        permutation(s, index + 1, result, temp);
        swap(s[index], s[i]);
    }
}
int main()
{
    string s;
    cin >> s;
    string temp;
    temp = s;

    vector<string> result;
    permutation(s, 0, result, temp);
    sort(result.begin(), result.end());
    int r = result.size();
    for (int i = 0; i < r; i++)
    {
        cout << result[i] << " ";
    }
}