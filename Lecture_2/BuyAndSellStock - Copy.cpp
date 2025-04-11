#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> num(n);
  for (int i = 0; i < n; i++)
  {
    cin >> num[i];
  }
  int min_amount = INT_MAX, s_min = INT_MAX;
  int index = 0, s_index = 0;
  for (int i = 0; i < n; i++)
  {
    if (min_amount > num[i])
    {
      s_min = min_amount;
      min_amount = num[i];
      index = i;
    }
    else if (num[i] > min_amount and num[i] > s_min)
    {
      s_min = num[i];
      s_index = i;
    }
  }

  // cout<<min_amount<<endl;
  // cout<<s_min<<endl;
  if (index == n - 1)
  {
    min_amount = s_min;
    index = s_index;
  }
  int max_amount = INT_MIN;
  for (int i = index; i < n; i++)
  {
    if (max_amount < num[i])
    {
      max_amount = num[i];
    }
  }
  // cout<<max_amount<<endl;
  cout << max_amount - min_amount;
}