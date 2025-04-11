#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void rev_string(string s)
{
    string temp = "";
    string result = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            temp += s[i];
        }
        else
        {
            reverse(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        }
    }
    reverse(temp.begin(), temp.end());
    result += temp + " ";
    cout << result << endl;
}
int main()
{
    string s;
    getline(cin, s);
    rev_string(s);
}