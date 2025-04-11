#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int max_len = 0;
        int i = 0, j = 0;
        unordered_map<char, int> freq;
        while (j < n)
        {
            freq[s[j]]++;
            while (freq[s[j]] > 1)
            {
                freq[s[i]]--;
                i++;
            }
            max_len = max(max_len, j - i + 1);
            j++;
        }
        return max_len;
    }
};
int main()
{
    string s;
    cin >> s;
    Solution solution;
    int result = solution.lengthOfLongestSubstring(s);

    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}