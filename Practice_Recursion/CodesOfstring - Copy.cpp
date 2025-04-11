#include <iostream>
#include <string>
#include <vector>
using namespace std;
// vector<string> keys = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void code(string num, int i, string r)
{
    if (i == num.size())
    {
        cout << r << " ";
        return;
    }

    int f_digit = num[i] - '0';
    if (f_digit > 0)
    {
        char ch = 'A' + f_digit - 1;
        r.push_back(ch);
        code(num, i + 1, r);
        r.pop_back();
    }

    if (i + 1 < num.size())
    {
        int s_digit = num[i + 1] - '0';
        int n = f_digit * 10 + s_digit;
        if (n <= 26 and f_digit > 0)
        {
            char ch = 'A' + n - 1;
            r.push_back(ch);
            code(num, i + 2, r);  //yahan par i+2 ke liye call hogi
            r.pop_back();
        }
    }
}
int main()
{
    string num;
    cin >> num;

    code(num, 0, "");
}