#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char temp=str[0];
    int count=1;
    for(int i=1;i<str.size();i++){
        if(temp==str[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count=1;
            temp=str[i];
        }
    }
    cout<<temp<<endl;
}