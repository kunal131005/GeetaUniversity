#include <iostream>
#include <cstring>
using namespace std;
bool isSame(char a[], char b[])
{
    int i = 0, j = 0;
    while (i <= strlen(a) and j <= strlen(b))
    {
        if (a[i] != b[j])
        {
            return false;
        }
        i++;
        j++;
    }
    if (a[i] != '\0' || b[j] != '\0')
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    char s1[1000];
    cin.getline(s1, 1000);
    char s2[1000];
    cin.getline(s2, 1000);
    if(isSame(s1,s2)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}