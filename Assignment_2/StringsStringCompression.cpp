#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0, j = 1;
    int count = 1;
    string result = "";
    while (j < str.size())
    {
        if (str[i] == str[j])
        {
            count++;
        }
        else
        {
            result += str[i];
            if (count != 1)
            {
                result += to_string(count);
            }
            count = 1;
            i = j;
        }
        j++;
    }
    result += str[i];
    if (count != 1)
    {
        result += to_string(count);
    }
    cout << result << endl;
}