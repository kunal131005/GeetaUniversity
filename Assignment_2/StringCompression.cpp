#include <iostream>
#include <string>
#include <vector>
using namespace std;
void compress(vector<char>& chars) {
    int n = chars.size();
    int i = 0, j = 0;

    while (i < n) {
        int count = 1;
        while (i + 1 < n && chars[i] == chars[i + 1]) {
            count++;
            i++;
        }
        chars[j++] = chars[i++];
        if (count > 1) {
            for (char c : to_string(count)) {
                chars[j++] = c;
            }
        }
    }

    chars.resize(j);
}
// void compress(vector<char>& chars)
// {
//     int n = chars.size();
//     int count = 1;
//     string result = "";
//     int i = 0, j = 1;
//     while (j < n)
//     {
//         if (chars[i] == chars[j])
//         {
//             count++;
//         }
//         else
//         {
//             result += chars[i];
//             if (count > 1)
//             {
//                 result += to_string(count);
//             }
//             count = 1;
//             i = j;
//         }
//         j++;
//     }
//     // cout<<result<<endl;
//     result += chars[i];
//     if (count > 1)
//     {
//         result += to_string(count);
//     }
//     cout << result << endl;
//     chars.resize(result.size());
//     for (int k = 0; k < result.size(); k++)
//     {
//         chars[k] = result[k];
//     }
//     return;
// }
int main()
{
    // string str;
    // cin >> str;
    // int i = 0, j = 1;
    // int count = 1;
    // string result = "";
    // while (j < str.size())
    // {
    //     if (str[i] == str[j])
    //     {
    //         count++;
    //     }
    //     else
    //     {
    //         result += str[i];
    //         result += to_string(count);
    //         count = 1;
    //         i = j;
    //     }
    //     j++;
    // }
    // result += str[i];
    // result += to_string(count);
    int n;
    cin >> n;

    vector<char> chars(n);
    for (int i = 0; i < n; i++)
    {
        cin >> chars[i];
    }

    compress(chars);
    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i];
    }
}
