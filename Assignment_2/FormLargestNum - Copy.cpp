#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    return a + b > b + a;
}
string formBiggestNumber(vector<int> &nums)
{
    vector<string> str;
    for (int ele : nums)
    {
        str.push_back(to_string(ele));
    }
    sort(str.begin(), str.end(), compare);
    if (str[0] == "0")
        return "0";

    string largest;
    for (string ele : str)
    {
        largest += ele;
    }
    return largest;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        cout << formBiggestNumber(num) << endl;
    }
    return 0;
}