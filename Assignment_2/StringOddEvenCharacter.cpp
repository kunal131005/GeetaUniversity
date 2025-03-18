#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cin >> str;
    for(int i=0;i<str.size();i++){
      if(i%2==0){
        str[i]=str[i]+1;
      }
      else{
        str[i]=str[i]-1;
      }
    }
    cout<<str<<endl;
}