#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;
vector<string> key = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void generate(vector<string> &result, string &n, string r, int i, int j)
{
    // base case
    if (i == n.size())
    {
        result.push_back(r.substr(0, j));
        return;
    }

    // recursive case;
    int digit = n[i] - '0';
    if (digit > 1)
    {
        for (char ch : key[digit])
        {
            generate(result, n, r + ch, i + 1, j + 1);
        }
    }
    else
    {
        generate(result, n, r, i + 1, j);
    }
}
vector<string> letterCombinations(string digits)
{
    if (digits.empty())
        return {};
    vector<string> result;
    generate(result, digits, "", 0, 0);
    return result;
}
int main()
{
    string n;
    cin >> n;
    string r(n.size(), ' ');
    vector<string> result;
    generate(result, n, r, 0, 0);
}