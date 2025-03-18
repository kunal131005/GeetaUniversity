#include <iostream>
#include <string>
using namespace std;
bool isVowel(char ch)
{
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int main()
{
    string s;
    cin >> s;
    int c_length=0,max_length=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isVowel(s[i]))
        {
            c_length++;
            max_length=max(max_length,c_length);

        }
        else
        {
            c_length=0;
        }
    }
    cout<<max_length<<endl;
}