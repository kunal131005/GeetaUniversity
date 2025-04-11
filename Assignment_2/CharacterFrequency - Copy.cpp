#include <iostream>
#include <string>
using namespace std;
int main()
{
    // char str[1000];
    // cin.getline(str,1000);
    string str;
    cin >> str;
    cout << str << endl;
    int i = 0, j = 1;
    int count = 1;
    string result = "";
    while (j < str.size())
    {
        if (str[i] == str[j])
        {
            count++;
        }
        else
        {
            result += str[i];
            result += to_string(count);
            count = 1;
            i = j;
        }
        j++;
    }
    result += str[i];
    result += to_string(count);
    // while(j<strlen(str)){
    //   if(str[i]==str[j]){
    //     count++;
    //     j++;
    //   }
    //   else{
    //     str[i+1]=count+'0';
    //     count=1;
    //     i++;
    //   }
    // }
    cout << result << endl;
}