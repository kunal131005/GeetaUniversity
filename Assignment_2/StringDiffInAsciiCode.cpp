#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str;
  cin >> str;
  cout << str << endl;
  int i = 0, j = 1;
  string result = "";

  while (j < str.size())
  {
    int diff = str[j] - str[i];
    result += str[i];
    result += to_string(diff);
    i++;
    j++;
  }

  result += str[i];
  cout << result;
}

