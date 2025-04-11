#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main(){
    string st;
    cin>>st;
    if(isPalindrome(st)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
}