#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=1;
    char temp=s[0];
    for(int i=1;i<s.size();i++){
        if(temp==s[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            count=1;
            temp=s[i];
        }
    }
    cout<<temp<<endl;
}