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
    int count=0;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            string temp="";
            for(int k=i;k<=j;k++){
                temp+=s[k];
            }
            if(isPalindrome(temp)){
                count++;
            }
        }
    }
    cout<<count<<endl;
}