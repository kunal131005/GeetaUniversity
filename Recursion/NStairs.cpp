#include <iostream>
#include <vector>
using namespace std;
// int stairs(int n)
// {
//    if (n == 0)
//       return 1;
//    if (n < 0)
//       return 0;
//    return stairs(n - 1) + stairs(n - 2) + stairs(n - 3);
// }

void Nstairs(int n, int k, vector<int> &r)
{
   if (n == 0)
   {
      for (int ele : r)
      {
         cout << ele << " ";
      }
      cout << endl;
      return;
   }
   if (n < 0)
      return;
   for (int i = 1; i <= k; i++)
   {
      r.push_back(i);
      Nstairs(n - i, k, r);
      r.pop_back();
   }
}
int main()
{
   // when you can take maximum three steps (1,2,3)
   int n;
   cin >> n;
   int k;
   cin >> k;
   // cout << stairs(n) << endl;
   vector<int> r;
   Nstairs(n, k, r);
}
