`#include <iostream>
#include <cstring>
#include <climits>
#include <algorithm>
using namespace std;
void RoatateString(char ch[],int k)
{
    // 1. move every charecter n position ahead
    int length = strlen(ch);
    int i = length - 1;
    cout<<ch<<endl;
    while (i >= 0)
    {
        ch[i + k] = ch[i];
        i--;
    }
    i=0;
    int j=length;
    while(i<k){
        ch[i]=ch[j];
        i++;
        j++;
    }
    ch[length]='\0';
    cout<<ch<<endl;
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[1000];
    cin.getline(a, 1000);
    RoatateString(a,n);
}