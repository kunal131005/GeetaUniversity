
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  string str;
  cin>>str;
  // cout<<str<<endl;
  for(int i=0;i<str.size();i++){
    if(isupper(str[i])){
      cout<<endl;
    }
    
    cout<<str[i];
  }
}