#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[] = "abcba";
    // cin.getline(a,1000);
    int frequency[26] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        char ch = a[i];
        int index = ch - 'a';
        frequency[index]++;
    }
    // for(int i=0;i<26;i++){
    //     cout<<frequency[i]<<" ";
    // }
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] > 0)
        {
            char x = i + 'a';
            cout << "Character " << x << " Occuring " << frequency[i] << " times." << endl;
        }
    }
}