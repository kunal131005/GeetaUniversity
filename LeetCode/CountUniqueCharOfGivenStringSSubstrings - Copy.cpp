#include <iostream>
#include <vector>
#include <string>
#include<climits>
using namespace std;
bool isUnique(string s,int& count)
{
    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    for(int ele:freq){
        if(ele==1){
            count++;
        }
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    int max_len=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        string temp = "";
        for (int len = 1; len <= n - i; len++)
        {
            temp = s.substr(i, len);
            cout<<temp<<" ";
            if (isUnique(temp,count))
            {
                
            }
        }
    }
    cout << max_len << endl;

    return 0;
}
