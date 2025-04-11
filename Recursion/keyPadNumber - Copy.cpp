#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> key = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
void phoneKeypad(string &n, string &r, int i, int j)
{
    // base case
    if (i == n.size())
    {
        cout << r << endl;
        return;
    }

    // recursive case;
    int digit = n[i] - '0';
    if(digit==0){
        phoneKeypad(n,r,i+1,j);
    }
    else
    {
        for (int k = 0; k < key[digit].size(); k++)
        {
            r[j] = key[digit][k];
            phoneKeypad(n, r, i + 1, j + 1);
        }
    }
}
int main()
{
    string n;
    cin >> n;
    string r(n.size(),' ');
    phoneKeypad(n, r, 0, 0);
}