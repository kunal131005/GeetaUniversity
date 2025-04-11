#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0, j = 1;
    string result = "";
    vector<int> alpha(26, 0);
    while (j < s.size())
    {
        if (s[i] != s[j])
        {
            alpha[s[i]-'a']++;
            i = j;
            j++;
        }
        else
        {
            i = j + 1;
            j += 2;
        }
    }
    for(int k=0;k<26;k++){
        if(alpha[k]>0){
            cout<<char('a'+k);
        }
    }
}