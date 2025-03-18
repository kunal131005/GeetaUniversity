#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string s;
  cin >> s;
  vector<int> alpha(26, 0);
  for (char c : s)
  {
    alpha[c - 'a']++;
  }
  int even = INT_MAX, odd = INT_MIN;
  for (int ele : alpha)
  {
    if (ele != 0 and ele % 2 != 0)
    {
      odd = max(odd, ele);
    }
  }
  for (int i = alpha.size() - 1; i >= 0; i--)
  {
    if (alpha[i] != 0 and alpha[i] % 2 == 0)
    {
      even = min(even, alpha[i]);
    }
  }
  int diff = odd - even;
  cout << diff;
}