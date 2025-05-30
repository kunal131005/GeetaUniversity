// 123 
// ABC AW LC 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void generate(string &n, string &r, int i, int j)
{
    // base case
    if (i == n.size())
    {
        cout << r.substr(0, j) << " ";
        return;
    }

    // recursive case;
    // for the first digit from the input n string
    int fdigit = n[i] - '0';
    if (fdigit > 0)
    {
        char ch = 'A' + fdigit - 1;
        r[j] = ch;
        generate(n, r, i + 1, j + 1);
    }

    // for the second digit from the input n string(<=26)
    if (i + 1 < n.size())
    {
        int sdigit = n[i + 1] - '0';
        int num = 10 * fdigit + sdigit;
        if (num <= 26 and fdigit > 0)
        {
            char ch = 'A' + num - 1;
            r[j] = ch;
            generate(n, r, i + 2, j + 1);
        }
    }
}

int main()
{
    string n;
    cin >> n;

    string r(n.size(), ' ');
    generate(n, r, 0, 0);
}