#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    int i=0,j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    if(isPalindrome(s)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}