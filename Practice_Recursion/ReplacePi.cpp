#include <iostream>
#include <string>
using namespace std;
void ReplacePi(string s, int i)
{
    if (i == s.size())
    {
        cout << s << endl;
        return;
    }

    if (i + 1 < s.size() and s[i] == 'p' and s[i + 1] == 'i')
    {
        s.replace(i, 2, "3.14");
        ReplacePi(s, i + 2);
    }
    else
    {
        ReplacePi(s, i + 1);
    }
}
void RemovePi(string s, int i)
{
    if (i == s.size())
    {
        cout << s << endl;
        return;
    }

    if (i + 1 < s.size() and s[i] == 'p' and s[i + 1] == 'i')
    {
        s.erase(i, 2);
        RemovePi(s, i);
    }
    else
    {
        RemovePi(s, i + 1);
    }
}
int CountPi(string s,int i,int &count){
    if(i==s.size()){
        return 0;
    }

    if(i+1<s.size() and s[i]=='p' and s[i+1]=='i'){
        count++;
        CountPi(s,i+2,count);
    }
    else{
        CountPi(s,i+1,count);
    }
}
int main()
{
    string s;
    cin >> s;

    ReplacePi(s, 0);
    RemovePi(s, 0);
    int count=0;
    CountPi(s,0,count);
    cout<<count<<endl;
}