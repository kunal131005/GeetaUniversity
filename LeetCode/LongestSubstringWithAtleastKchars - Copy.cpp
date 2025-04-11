#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;
class Solution
{
public:
    int longestSubstring(string s, int k)
    {
        int n = s.size();
        int l = 0, r = 0;
        int max_len = INT_MIN;
        unordered_map<char, int> freq;
        while (r < n)
        {
            freq[s[r]]++;
            while (freq[s[r]] > k)
            {
                freq[s[l]]--;
                l++;
            }
            if (freq[s[r]] == k)
            {
                max_len = max(max_len, r - l + 1);
            }
            r++;
        }
        return (max_len == INT_MIN) ? 0 : max_len;
    }
};
int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    Solution solution;
    int result = solution.longestSubstring(s, k);

    cout << "Length of the longest substring without repeating characters: " << result << endl;

    return 0;
}