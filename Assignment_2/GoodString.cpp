#include <iostream>
#include <string>
using namespace std;
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main()
{

    string str;
    cin >> str;
    int n = str.size();
    int count = 0;
    int c_length = 0, max_length = 0;
    for (int i = 0; i < n; i++)
    {
        if (isVowel(str[i]))
        {
            c_length++;
            max_length = max(max_length, c_length);
        }
        else
        {
            c_length = 0;
        }
    }
    cout << max_length << endl;
}