#include <iostream>
#include <string>
using namespace std;
void RemoveDuplicates(string str)
{
    int i = 0, j = 1;
    while (j < str.size())
    {
        if (str[i] != str[j])
        {
            i++;
            str[i] = str[j];
        }
        j++;
    }
    str.resize(i+1);
    cout << str;
    // RemoveDuplicates(str);
}
int main()
{
    string s;
    cin >> s;
    RemoveDuplicates(s);
}