#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int result = 0;
    int sign = 1;
    int i=0;
    // agar mera pahle char ,digit nhi hai or saath hi koi sign or white space nhi hai to return 0
    if(!isdigit(s[i]) and !(s[i] == '-' || s[i] == '+' ||s[i]==' '))return 0;

    while(i<s.size() and s[i]==' ')i++;
    // agar maine 0 ko read kiya or uske just baad non digit hai to return 0 ,warna aage badho
    while(i<s.size() and s[i]=='0'){
        i++;
        if(!isdigit(s[i])){
            return 0;
        }
    }
    // int se pahle sign check karna kyunki int ka behaviour whi decide karega
    if (s[i] == '-' || s[i] == '+')
    {
        sign = (s[i] == '-') ? -1 : 1;
    // yahan bhi aage wala char check karo kahin pahle + ho or just baad - aa jaye
        i++;
    }
    //yahan se digit read karna shuru hoga agar s[i] digit hai to hum further aage jayenge or yeh tab tak chalega ya to string khatam ho jaye   ya phir char ho s[i]
    while(i<s.size() and isdigit(s[i]))
    {
        int digit=s[i]-'0';
        if(result>(INT_MAX-digit)/10){
            cout<< (sign==1)?INT_MAX:INT_MIN;
            break;
        }
        result = result * 10 + digit;
       i++;
    }
    cout << result*sign;
}