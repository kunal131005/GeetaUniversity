#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
      if(isupper(str[i])){
        str[i]=tolower(str[i]);
      }
      else{
        str[i]=toupper(str[i]);
      }
    }
    cout<<str<<endl;
}