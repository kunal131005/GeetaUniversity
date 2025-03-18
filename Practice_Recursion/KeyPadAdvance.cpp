#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> keys = {"", ".@&", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
vector<string> search = {"kartik", "divyam", "sneha", "vansh", "coding","kunal","shivam"};
void code(string s, int i, string r)
{
    if (i == s.size())
    {
        cout << r << " ";
        for (int i = 0; i < search.size(); i++)
        {
            string temp = search[i];
            int k = 0;
            for (int j = 0; j < temp.size() ; j++)
            {
                while (k < r.size() && r[k] == temp[j])
                {
                    k++;
                    j++;
                }
                if (k == r.size())
                {
                    cout << temp << " ";
                    break;
                }
            }
        }
        cout << endl;
        return;
    }

    int digit = s[i] - '0';
    if (digit >= 0 && digit < keys.size())
    {
        for (int k = 0; k < keys[digit].size(); k++)
        {
            r.push_back(keys[digit][k]);
            code(s, i + 1, r);
            r.pop_back();
        }
    }
}
int main()
{
    string s;
    cin >> s;

    code(s, 0, "");
}