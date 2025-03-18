#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    unordered_map<char, int> req;
    req['B'] = 1;
    req['b'] = 1;
    req['u'] = 2;
    req['l'] = 1;
    req['s'] = 1;
    req['a'] = 2;
    req['r'] = 1;
    for (auto &p : req)
    {
        freq[p.first] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (req.find(s[i]) != req.end())
        {
            freq[s[i]]++;
        }
    }
    int min_b = INT_MAX;
    for (auto &p : req)
    {
        min_b = min(min_b, freq[p.first]/p.second);
    }
    cout << min_b << endl;
}