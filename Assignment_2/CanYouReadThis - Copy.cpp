#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++){
    if(isupper(str[i])){
      cout<<endl;
    }
    cout<<str[i];
  }
}

// when it encounters a uppercase letter end the line