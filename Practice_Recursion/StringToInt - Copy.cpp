#include<iostream>
#include<string>
using namespace std;
int change(string s,int i){
    if(i==0){
        return 0;
    }

    int f_digit=s[i-1]-'0';
    int s_digit=change(s,i-1)*10+f_digit;
    return s_digit;
}
int main(){
    string s;
    cin>>s;
    cout<<change(s,s.size())+1;
}