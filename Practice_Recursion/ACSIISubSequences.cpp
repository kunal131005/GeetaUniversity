#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
void subs(string s, int i, string r)
{
    if (i == s.size())
    {
        cout << r << " ";
        return;
    }

    subs(s, i + 1, r);
    r.push_back(s[i]);

    subs(s, i + 1, r);
    r.pop_back();

    r+=to_string(s[i]);
    subs(s,i+1,r);
    
    r.pop_back();
}
int main()
{
    string s;
    cin >> s;
    subs(s, 0, "");
}